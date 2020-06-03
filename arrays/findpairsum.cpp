#include <iostream>
#include <unordered_map>
using namespace std;

bool findPair(int ar[], int n, int k)
{
  unordered_map<int, int> map;
  for(int i=0; i<n; i++){
    if(map.find(k - ar[i]) != map.end()){
      cout << "pair found at index " << map[k-ar[i]] << " and " << i;
      return true;
    }
    map[ar[i]] = i;
  }

  cout << "pair not found";
  return false;
}

int main()
{
  int a[] = {1,2,3,4,5,6,7};
  int n = sizeof(a) / sizeof(a[0]);
  findPair(a, n, 12);
  return 0;
}
