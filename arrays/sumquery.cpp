#include <iostream>
using namespace std;

void sum(int ar[], int a[], int n)
{
  ar[0] = a[0];
  for(int i=1; i<n; i++){
    ar[i] = a[i] + ar[i-1];
    cout << ar[i] << "\n";
  }
}

int query(int ar[], int start, int end)
{
  if(start==0){
    return ar[end];
  }
  cout << "ar[start] " << ar[start] << " ar[end] " << ar[end] << "\n" << flush;
  return ar[end] - ar[start-1];
}

int main()
{
  int a[] = {1,2,5, 0, 4};
  int n = sizeof(a) / sizeof(a[0]);
  int ar[n];
  sum(ar, a, n);
  int result = query(ar, 2, 4);
  cout << "result: " << result << endl;
  return 0;
}
