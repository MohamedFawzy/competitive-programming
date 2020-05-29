#include <iostream>
#include <algorithm> // for sorting
#include <assert.h> // for assert
using namespace std;

int max_val(int arr[], int size){

  int max_val = arr[0]; // init wrong with first value as max
  for(int i=0; i< size; i++){
    if(arr[i] > max_val){
      max_val = arr[i];
    }
  }
  return max_val;
}

void max_val_test(){
  const int SIZE=5;
  int arr[SIZE];
  // run random 1000 test
  for(int test=0; test<1000; test++){
    for(int i=0; i< SIZE; i++){
      // create new array values
      arr[i] = rand() % 100; // give us a range from [0,99]
    }
    // cal function to get max value
    int myAnswer = max_val(arr, SIZE);
    // sort the result pick up the last one since it's the greatest element in array
    sort(arr, arr+SIZE);
    int correctAnswer = arr[SIZE-1];
    assert(correctAnswer == myAnswer);
  }

  cout << "Prefect";
}


int main(){

  max_val_test();
  return 0;
}
