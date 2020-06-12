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

// board size N*N
const int N=6;
void displayBoard(int arr[N][N]);
void addItem(int arr[N][N], int item);


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


  // first player name
  // cout << "Enter first player name\n";
  // cin >> player1;
  // cout << "Enter first player color e.g (1)blue , (2)red\n";
  // cin >> player1_color;
  // // second player name
  // cout << "Enter second player name\n";
  // cin >> player2;
  // cout << "Enter second player color e.g (1)blue, (2)red\n";
  // cin >> player2_color;

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

  //
  // // player 1 starts
  // addItem(arr,player1_color);
  // displayBoard(arr);
  // cout << "done";


  return 0;
}
