#include <iostream>
#include <algorithm> // for sorting
#include <assert.h>
using namespace std;
/***
* given array [1,2,3,5,6,2,2,6] find sub array with of length k with max sum
* such as array = [1,2,3,3,4,5,6,7,8] k =3
[1,2,3]
  [2,3,3]
    [3,3,4]
      [3,4,5]
        [4,5,6]
          [6,7,8]
*         notice we stopped here since k=3 for element 6 is the last window we can get
*
***/

// solution one bruteforce
int slidingWindowMax(int arr[], int size, int k){
  int max = 0;

  // loop through array elements where i less than array - k +1 such that array of length 9 will stop at element 6
  // above array example will stop at element 6
  // arrsize = 9 , k = 3, 9-3+1 -> arr[7] = 6
  for(int i=0; i<size-k+1; i++){ // O(nk)
    int sum = 0;
    for(int win=0; win<k; win++){
      sum += arr[i+win];
    }
    if (i==0 || sum > max) {
      /* code */
      max = sum;
    }
  }

  return max;
}

// sliding window optimized solution
int slidingWindowMax2(int arr[], int size, int k){

  int maxWindow = 0;

  for (int window = 0; window < k; window++) {
    /* code */
    maxWindow += arr[window];
  }

  int sum = maxWindow;

  for(int i=1; i<size-k+1; i++){
    sum = sum - arr[i-1] + arr[i+k-1];
    maxWindow = max(maxWindow, sum);
  }
  return maxWindow;
}

void test_sliding_window(){
  const int SIZE=7;
  int arr[SIZE];
  for(int test=0; test<1000; test++){
    for(int i=0; i<SIZE; i++){
      arr[i] = rand() % 100;
    }

    sort(arr, arr+SIZE);
    int myAnswer = slidingWindowMax2(arr, SIZE, 3);

    int correctAnswer = arr[SIZE-1] + arr[SIZE-2] + arr[SIZE-3];
    assert(myAnswer == correctAnswer);
  }

  cout << "Prefect";
}

int main(){

  test_sliding_window();
  return 0;
}
