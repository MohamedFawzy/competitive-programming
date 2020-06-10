#include <iostream>
using namespace std;
const int N=3;

enum dir { DOWN=0, RIGHT, UP, LEFT, UP_LEFT, DOWN_RIGHT, UP_RIGHT, DOWN_LEFT };
int dir_r[] = {1, 0, -1, 0, -1, 1, -1, 1};
int dir_c[] = {0, 1, 0, -1, -1, 1, 1, -1};

// optimized version using matrix directions
int sumWithDir(int r, int c, int dir, int steps, int square[N][N])
{
  int sum =0;
  for(int s=0; s<steps; s++){
    sum += square[r][c];
    r += dir_r[dir];
    c += dir_c[dir];
  }

  return sum;
}

bool validateMagic(int square[N][N])
{
  int val = sumWithDir(0, 0, RIGHT, N, square);

  for(int i=0; i<N; i++){
    if(val != sumWithDir(i, 0, RIGHT, N, square)) return false;
    if(val != sumWithDir(0, i, DOWN, N, square)) return false;
  }

  if(val != sumWithDir(0,0, DOWN_RIGHT, N, square)) return false;
  if(val != sumWithDir(0, N-1, DOWN_LEFT, N, square)) return false;

  return true;
}




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

  if(validateMagic(square)){
    cout << "valid\n";
  }else{
    cout << "not valid\n";
  }

  square[0][0]++;
  if(validate(square)){
    cout << "Valid\n";
  }else{
    cout << "Not Valid\n";
  }

  if(validateMagic(square)){
    cout << "valid\n";
  }else{
    cout << "not valid\n";
  }

  return 0;
}
