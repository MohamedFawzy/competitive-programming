#include <iostream>
#include <climits>
using namespace std;


int main(int argc, char const *argv[]) {

  std::cout << LONG_MAX << "\n";
  std::cout << INT_MAX << "\n";
  int first_number = 5;
  int second_number = 2;


  int sum = first_number + second_number;

  std::cout << "sum of 2+5 is " << sum;

  return 0;
}
