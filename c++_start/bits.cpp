#include <iostream>
using namespace std;
// https://raw.githubusercontent.com/mostafa-saad/ArabicCompetitiveProgramming/master/15%20C%2B%2B%20Programming%204%20Competitions/41%20C%2B%2B%20Programming%204%20Competitions%20-%20Bits.cpp
void printNumber(int n, int len)
{
  if(!len) return;

  printNumber(n >> 1, len-1); // remove last bit
  cout << (n&1); // print last bit
}


int main()
{
  printNumber(5, 1);
  return 0;
}
