#include <iostream>
#include <algorithm> // for sorting
#include <assert.h> // for assert
using namespace std;

// reverse array in place without extra memory
void reverse_in_place(int arr[], int size){

  for(int i=0; i< size/2; ++i){

    swap(arr[i], arr[size-i-1]);
  }
}

void test_reverse_in_place(){

  const int SIZE=7;
  int arr[SIZE];
  int cpy[SIZE];

  int used_size = SIZE;


for (int k = 0; k < 2; k++) {
    /* code */
  for(int test=0; test<1000; test++){
      for(int i=0; i<used_size; i++){
        arr[i] = cpy[i] = rand() % 100;
      }
      reverse_in_place(arr, used_size);
      reverse(cpy, cpy+used_size);
      for(int i=0; i<used_size; i++){
          assert(cpy[i] == arr[i]);
      }
    }
    used_size--; // change used size to make test run against odd , even arrays 1000 test foreach odd, even
}

  cout << "Prefect";
}

int main(){

  test_reverse_in_place();
  return 0;
}
