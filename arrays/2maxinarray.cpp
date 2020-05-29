#include <iostream>
#include <algorithm> // sort
#include <assert.h> // for assert method
using namespace std;

int get2ndMax(int arr[], int size){
  assert(size >= 2);

  int firstMax = arr[0]; // init with wrong values
  int secondMax = arr[1];

  if (firstMax < secondMax){
    swap(firstMax, secondMax); // swap elements in case first max value is less than second max value
  }

  for(int i=2; i< size; i++){
    // if element is greater than both
    if(arr[i] > firstMax){
      // update second to first and update first to current element in array
      secondMax = firstMax;
      firstMax = arr[i];
    }else if(arr[i] > secondMax){
      // if element is greater than second max only this means update the second max only
      secondMax = arr[i];
    } // otherwise nothing todo element is small than both first max and second max
  }

  return secondMax;
}

// generate random samples for testing our algorithm
void test_get2ndMax()
{
  const int SIZE=10;
  int arr[SIZE];

  // generate random 1000 test cases for testing our algorithm
  for(int test=0; test<1000; test++){
      // generate array of length 10
      for (int i = 0; i < SIZE; i++) {
        /* code */
        arr[i] = rand() % 100; // give us a range from [0,99]
      }
      int myAnswer = get2ndMax(arr, SIZE);
      sort(arr, arr+SIZE);
      int correctAnswer = arr[SIZE-2];
      assert(myAnswer== correctAnswer);
  }

  cout << "Prefect";
}

int main()
{
  test_get2ndMax();
  return 0;
}
