#include <iostream>
using namespace std;

void read2Numbers(double &dNum1, double &dNum2){
  while(true){
    dNum1 = dNum2 = 0;
    cout << "Please enter 2 numebrs: ";
    cin >> dNum1 >> dNum2;

    // input validation
    if(cin.fail()){
      cout << "you should enter a valid numbers\n\n";
      cin.clear();
      cin.ignore(10000, '\n');
    }else{
      break;
    }
  }
}


int menu()
{
  int iChoice=0;

  std::cout << "\n Menu Options" << '\n';
  cout << "\t To sum the numbers enter 1\n";
  cout << "\t to subtract the numbers enter 2\n";
  cout << "\t to multiply the numbers enter 3\n";
  cout << "\t to divide the numbers enter 4\n";
  cout << "\t to enter the 2 numbers again , enter 5";

  cout << "\n\tEnter the choice: ";
  cin >> iChoice;
  // input validation
  if(cin.fail()){
    cout << "\t\nyou should enter correct value\n\n";
    cin.clear();
    cin.ignore(10000, '\n');
    return menu();
  }

  return iChoice;
}

bool sum(double dNum1, double dNum2, double &dResult){
  dResult = dNum1 + dNum2;
  return true;
}

bool sub(double dNum1, double dNum2, double &dResult){
  dResult = dNum1 - dNum2;
  return true;
}

bool mul(double dNum1 , double dNum2, double &dResult){
  dResult = dNum1 * dNum2;
  return true;
}

bool div(double dNum1, double dNum2, double &dResult){

  if(dNum2==0.0){
    cout << "\t\t we cannot divide by zero";
    return false;
  }

  dResult = dNum1 / dNum2;
  return true;
}

void runCalc(){
  double dNum1 = 0, dNum2 = 0, dResult = 0;
  int iChoice = 0;
  bool bFinished = false;

  while (!bFinished) {
    /* code */
    read2Numbers(dNum1, dNum2);
    iChoice = menu();

    if(iChoice==5){
      continue;
    }

    if (iChoice==1) {
      /* code */
      bFinished = sum(dNum1, dNum2, dResult);
    }else if(iChoice==2){
      bFinished = sub(dNum1, dNum2, dResult);
    }else if (iChoice==3) {
      /* code */
      bFinished = mul(dNum1, dNum2, dResult);
    }else if(iChoice==4){
      bFinished = div(dNum1, dNum2, dResult);
    }

    if (bFinished) {
      /* code */
      cout << "\n Result of operation: " << dResult << "\n";
    }
  }
}


int main(int argc, char const *argv[]) {
  /* code */
  runCalc();
  return 0;
}
