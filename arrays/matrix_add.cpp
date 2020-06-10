#include <iostream>
using namespace std;

const int ROWS=2, COLS=3;

// make sure columns and rows for both matrices are equal
void add(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int arr3[ROWS][COLS])
{

  for(int r=0; r<ROWS; r++){
    for(int c=0; c<COLS; c++){
      arr3[r][c] = arr1[r][c] + arr2[r][c];
    }
  }

}




int main()
{
  int arr1[ROWS][COLS] = {1,2,3,4};
  int arr2[ROWS][COLS] = {{4}, {8}};
  int arr3[ROWS][COLS]; // garabage
  add(arr1, arr2, arr3);
  return 0;
}
