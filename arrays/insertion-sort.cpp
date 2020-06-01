#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

void insertion_sort(int arr[], int n)
{

  // start from 1 as first element assumed sorted
  for (int i = 1; i < n; i++) {
    /* code */
    int cp = arr[i];
    int j = i -1;
    // find correct position for copy and shift in same time  to right
    for(; j >= 0; j--){
      if(arr[j] < cp){
        break;
      }
      arr[j+1] = arr[j]; // shift
    }
    arr[j+1] = cp;
  }

}

void test_insertion_sort()
{
  const int SIZE=3;
  int arr[SIZE];
  int cp[SIZE];
  int tmp[SIZE];

  for(int test=0; test<1000; test++){
    cout << "TEST " << test+1 <<"\n"<<flush;
    for(int i=0; i<SIZE; i++){
      arr[i] = cp[i] = tmp[i] = rand() % 100;
    }
    insertion_sort(arr, SIZE);
    sort(cp, cp+SIZE);
    bool passed = true;
    for(int i=0; i < SIZE; i++){
      passed &= (arr[i] == cp[i]);
    }

    if(!passed){
      for(int i=0; i<SIZE; i++){
        cout << tmp[i] << " "<<flush;
      }
      assert(false);
    }
  }

  cout << "Prefect";
}

int main()
{
  test_insertion_sort();
  return 0;
}
