#include <iostream>
using namespace std;
const int N=3;

int sumRow(int i, int square[N][N])
{
  int sum =0;
  for(int j=0; j<N; j++){
    sum += square[i][j];
  }
  return sum;
}

int sumCol(int j, int square[N][N])
{
  int sum = 0;
  for(int i=0; i<N; i++){
    sum += square[i][j];
  }
  return sum;
}

int sumMainDiag(int square[N][N])
{
  int sum=0, pos=0;
  for(int i=0; i<N; i++){
    sum += square[pos][pos], pos++;
  }
  return sum;
}

int sumAntiDiag(int square[N][N])
{
  int sum=0, pos=0;
  for(int i=0; i<N; i++){
    sum += square[pos][N-pos-1], pos++;
  }
  return sum;
}

int validate(int square[N][N])
{
  int val = sumRow(0, square);
  for(int i=0; i<N; i++){
    if(val != sumRow(i, square)) return false;
    if(val != sumCol(i, square)) return false;
  }

  if(val != sumMainDiag(square)) return false;
  if(val != sumAntiDiag(square)) return false;
  return true;
}

int main()
{
  int square[N][N] = {
    {8, 1, 6},
    {3, 5, 7},
    {4, 9, 2}
  };

  if(validate(square)){
    cout << "Valid\n";
  }else{
    cout << "Not Valid\n";
  }

  square[0][0]++;
  if(validate(square)){
    cout << "Valid\n";
  }else{
    cout << "Not Valid\n";
  }

  return 0;
}
