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
  can be used for cycle detection not print cycles
indices = 0, 1, 2, 3, 4, 5
arr1[] = {2, 0, 1, 4, 3, 5};
0 - > 2
2 -> 1
1 -> 0 // cycle 1

3->4
4->3 // cycle 2

5-> 4 // cycle3

***/
using namespace std;

void cycles(int arr[], int size);

void cycles(int arr[], int size)
{
  /** create new array for visited values foreach element in
  // the result to detect if the element and index matched then we have match
  **/
  bool visited[size];
  fill_n(visited, size, false);

  // loop through elements
  int counter = 1;

  for(auto i=0; i<size; i++){
    if(!visited[i]){
      int k = i;
      cout << k << " -> " << arr[k]<<endl;
      k = arr[k]; // change from index to value of the index
      visited[k] = true;
      while(k != i){
        cout << k << " -> " << arr[k] << endl;
        k = arr[k];
        visited[k]=true;
      }
      cout << "End of cycle: " << counter<<endl;
      counter++;
    }
  }

}

int main()
{
  const int SIZE = 4;
  int arr[] = {1,2,3,0};
  cycles(arr, SIZE);

  cout << "test2========\n";

  const int size1 = 6;
  int arr1[] = {2,0,1,4,3,5};
  cycles(arr1, size1);
  return 0;
}
