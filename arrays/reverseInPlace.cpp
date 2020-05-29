#include <iostream>
#include <algorithm> // for sorting
#include <assert.h> // for assert
using namespace std;

// reverse array in place without extra memory
void reverse_in_place(int arr[], int size){

  for(int i=0; i< size/2; i++){

    swap(arr[i], arr[i-size-1]);
  }
}

int main(){

  return 0;
}
