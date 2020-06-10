#include <iostream>
#include <assert.h> // for assertion
using namespace std;
// make sure cols of first array == rows of second array
// matrix dot product
const int ROWS1=2, COLS1=3;
const int ROWS2=3, COLS2=2;

void mulitply(int arr1[ROWS1][COLS1], int arr2[ROWS2][COLS2], int arr3[ROWS1][COLS2])
{
  assert(COLS1==ROWS2);
  // construct array with empty zeros
  for(int r=0; r<ROWS1; r++){
    for(int c=0; c<COLS2; c++){
      arr3[r][c] = 0;
    }
  }

  // loop through rows of first array and mulitply it with columns of second array columns
  // append result and sum the value of row*column
  for(int r=0; r<ROWS1; r++){
    for(int c=0; c<COLS2; c++){
      // dot product on r-th row * c-th column
      for(int k=0; k<COLS1; k++){
        arr3[r][c] += arr1[r][k] * arr2[r][c];
      }
    }
  }

}

int main()
{
  return 0;
}
