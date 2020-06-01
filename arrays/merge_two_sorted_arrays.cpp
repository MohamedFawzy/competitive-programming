#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

void merge(int arr1[], int arr2[], int m , int k, int result[], int n)
{
  int idx1 = 0;
  int idx2 = 0;
  int res = 0;

  // while array one and array two less than size  for both
  while(idx1 < m & idx2 < k){
    if(arr1[idx1] < arr2[idx2]){
      // increment and assign in one step same as result[res] = arr1[indx1] then res++ and idx1++ in new line
      result[res++] = arr1[idx1++];
    }else{
      result[res++] = arr2[idx2++];
    }
  }

  while(idx1 < m){
    result[res++] = arr1[idx1++];
  }

  while(idx2 < k){
    result[res++] = arr2[idx2++];
  }

}


void test_merge_sorted_arrays()
{
  int a[5] = {1, 10, 100, 1000, 1001};
  int b[3] = {2, 4, 150};
  int c[8];
  merge(a,b, 5, 3, c, 8);

  for(int i=0; i<8; i++){
    cout << c[i] << "\n";
  }

}

int main()
{
  test_merge_sorted_arrays();
  return 0;
}
