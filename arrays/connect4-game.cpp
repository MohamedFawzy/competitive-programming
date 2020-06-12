#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/**
write program to simulate 2 players
- Turn by turn, ask player to put his item
  - validate it , e.g column is 6 items, column may be full.
- print the board after each turn
- check for winner after each turn (revise rules)
- which player starts ? do that randomly using rand() function , let players enter their names/color
**/
enum dir      { DOWN=0, RIGHT, UP, LEFT, UP_LEFT, DOWN_RIGHT, UP_RIGHT, DOWN_LEFT };
int dir_r[] = {1,        0,    -1,  0,    -1,       1,            -1,       1};
int dir_c[] = {0,        1,     0,  -1,   -1,        1,             1,     -1};

// board size N*N
const int N=6;
void displayBoard(int arr[N][N]);
void addItem(int arr[N][N], int item);
int sumWithDir(int r, int c, int dir, int steps, int arr[N][N]);
void player_wins(int arr[N][N], int sum_player1, int sum_player2);

void player_wins(int arr[N][N], int sum_player1, int sum_player2)
{
  for(int i=0; i<N; i++){
    int sum = sumWithDir(i, 0, RIGHT, 4, arr);
    cout << "Sum of right:\t" sum<<"\n";
    if(sum ==4){
      sum_player1 += 1;
    }else if(sumWithDir(0, i, DOWN, 4, arr)==8){
      sum_player2 += 1;
    }
  }


  if(sumWithDir(0,0, DOWN_RIGHT, 4, arr)==4){
    sum_player1 +=1;
  }else if(sumWithDir(0, 0, DOWN_RIGHT, 4, arr)==8){
    sum_player2 += 1;
  }
  if(sumWithDir(0, N-1, DOWN_LEFT, 4, arr)==4){
    sum_player1 += 1;
  }else if(sumWithDir(0, N-1, DOWN_LEFT, 4, arr)==8){
    sum_player2 += 1 ;
  }

}
// optimized version using matrix directions
int sumWithDir(int r, int c, int dir, int steps, int arr[N][N])
{

  int sum =0;
  for(int s=0; s<steps; s++){
    sum += arr[r][c];
    r += dir_r[dir];
    c += dir_c[dir];
  }

  return sum;
}

void addItem(int arr[N][N], int color)
{
    int row_idx, column_idx;
    cout << "Please enter your item in which index should be 0...5\n";
    cout << "Please enter row index\n";
    cin >> row_idx;
    cout << "please enter column index\n";
    cin >> column_idx;
    while(arr[row_idx][column_idx] != 0){
      cout << "please choice a different index already taken\n";
      cout << "Please enter row index\n";
      cin >> row_idx;
      cout << "please enter column index\n";
      cin >> column_idx;
    }
    arr[row_idx][column_idx] = color;
}


void displayBoard(int arr[N][N])
{
  for(int r=0; r<N; r++){
    cout << "------------\n";
    for(int c=0; c<N; c++){
      // print row by row for the matrix
      cout << arr[r][c] << "|";
    }
    cout << "\n";
  }
  cout << "------------\n";

}

int main()
{
  string player1, player2;
  int player1_color, player2_color;
  cout << "Welcome to connect 4 game \n";


  //first player name
  cout << "Enter first player name\n";
  cin >> player1;
  cout << "Enter first player color e.g (1)blue , (2)red\n";
  cin >> player1_color;
  // second player name
  cout << "Enter second player name\n";
  cin >> player2;
  cout << "Enter second player color e.g (1)blue, (2)red\n";
  cin >> player2_color;

  int arr[N][N] = {
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,0,0,0,0}
  };
  cout << "Init empty board\n";
  // display board
  displayBoard(arr);
  cout << "\n\n\n";

  int cnt =0;
  int player1_wins =  0;
  int player2_wins = 0;

  while(cnt < N*N){
    // player 1 starts
    cout << "Player 1 move\n";
    addItem(arr,player1_color);
    displayBoard(arr);
    // player 2 starts
    cout << "Player 2 move\n";
    addItem(arr, player2_color);
    displayBoard(arr);
    // sum the player values
    player_wins(arr, player1_wins, player2_wins);
    cout << "player1 wins >>>>>>>\t" << player1_wins<<"\n\n";
    cout << "player2 wins >>>>>>>\t" << player2_wins<<"\n\n";
    cnt++;
  }
  cout << "Done\n";
  return 0;
}
