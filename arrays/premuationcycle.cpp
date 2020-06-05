#include <iostream>
/***
To detect a cycle in an array or a linked list,
 we can use Floyd’s slow and fast pointers approach.

Algorithm :

  Start two pointers, slow & fast from head or 0th index.
  move slow pointer one index/node forward.
  move fast pointer two indexes/nodes forward.
  if slow & fast pointer’s index/node are same:
  There is a loop.
  if two pointers reach the last index/node:
  the array/linked list has no loops.
***/
using namespace std;

void cycles(int arr[], int size);

void cycles(int arr[], int size)
{

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
