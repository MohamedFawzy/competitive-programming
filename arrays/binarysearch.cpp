#include <iostream>
using namespace std;

int binarySearch(int ar[], int n, int k)
{
  int low = 0;
  int high = n-1;
  while(low <= high){
    int mid = (low+high) / 2;
    if(ar[mid]==k){
      return mid;
    }else if(ar[mid] > k){
      high = mid -1;
    }else{
      low = mid + 1;
    }
  }
  return -1;
}

int main()
{
  int ar[] = {1,2,3,4,5,6,7};
  int n = sizeof(ar) / sizeof(ar[0]);
  int result = binarySearch(ar, n, 5);
  cout << "result : " << result << "\n";
  return 0;
}
