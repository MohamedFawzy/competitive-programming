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

  for(int test=0; test<1000; test++){
    cout << "Test " << test + 1 << "\n" << flush;
    int k = 1 + rand() % 10;
    int m = 1 + rand() % 10;
    int n = k + m;

    int a[k];
    int b[m];
    int c[n];
    int tmp[n];

    for(int i=0; i < k; i++){
      a[i] = rand() % 100;

    }

    sort(a, a+k);

    for(int i=0; i < m; i++){
      b[i] = rand() % 100;
    }
    sort(b, b+m);
    // merge two arrays to new one array and use this for comparing the result from actual algorithm response
    copy(a, a+k, tmp);
    copy(b, b+m, tmp+k);
    sort(tmp , tmp+n);
    // for(int i=0; i<n; i++){
    //   cout << "tmp val "<< tmp[i] << "\n";
    // }

    merge(a, b, k, m, c, n);

    for(int i=0; i<n; i++){
      assert(c[i] == tmp[i]);
    }
  }
  cout << "Prefect !";
}

int main()
{
  test_merge_sorted_arrays();
  return 0;
}
