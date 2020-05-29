#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  double dNum1 = 0;
  double dNum2 = 0;
  double dResult = 0;
  int iChoice = 0;

  std::cout << "\t\t\t*** Welcome to calcautor v1 ***\n\n\n";

  calcStartingPoint: // goto point re back here

  std::cout << "please enter 2 numbers" << '\n';
  std::cin >> dNum1 >> dNum2;

  if(std::cin.fail()){
    std::cout << "you should enter correct values" << '\n';
    std::cin.clear();
    cin.ignore(10000,'\n');
    goto calcStartingPoint;
  }

  MenuStartingPoint:

  std::cout << "\n Menu Options" << '\n';
  cout << "\t To sum the numbers enter 1\n";
  cout << "\t to subtract the numbers enter 2\n";
  cout << "\t to multiply the numbers enter 3\n";
  cout << "\t to divide the numbers enter 4\n";
  cout << "\t to enter the 2 numbers again , enter 5";

  cout << "\n\tEnter the choice";
  cin >> iChoice;
  // input validation
  if(cin.fail()){
    cout << "\t\nyou should enter correct value\n\n";
    cin.clear();
    cin.ignore(10000, '\n');
    goto MenuStartingPoint;
  }

  if (iChoice==1) {
    /* code */
    dResult = dNum1 + dNum2;
  }else if(iChoice==2){
    dResult = dNum1 - dNum2;
  }else if (iChoice==3) {
    /* code */
    dResult = dNum1 * dNum2;
  }else if (iChoice==4) {
    /* code */
    if (dNum2==0.0) {
      /* code */
      cout << "\t\t we can't divde by zero";
      goto calcStartingPoint;
    }
    dResult = dNum1 / dNum2;
  }else if(iChoice==5){
    goto calcStartingPoint;
  }else{
    cout << "\t\tChoice must be from 1 to 5. retry again\n\n";
    goto MenuStartingPoint;
  }

  cout << "\nResult of operation: " << dResult << "\n";


  return 0;
}
