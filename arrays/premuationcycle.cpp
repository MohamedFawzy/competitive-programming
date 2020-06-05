#include <bits/stdc++.h>
using namespace std;

void cycles(int arr[], int size);

void cycles(int arr[], int size)
{
    // mapping for key, value of the array
    int i=0;
    int index = 0;
    // initialize container
    multimap<int, int> map;
    while(i < size){
      map.insert({i,1});
      if(map.count(index+1)) cout << "lol\n";
      cout << "i: " <<  i << "\tarr[i]: " << arr[i]<<endl;
      cout << "arr[i]: " << arr[i] << "\tindex+1: " << index+1<<endl;
      i++;
      index++;
    }
}


int main()
{
  // const int SIZE = 4;
  // int arr[] = {1,2,3,0};
  // cycles(arr, SIZE);

  const int size1 = 6;
  int arr1[] = {2,0,1,4,3,5};
  cycles(arr1, size1);
  return 0;
}
