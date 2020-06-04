#include <iostream>
using namespace std;
#define MAX 500
//https://www.geeksforgeeks.org/factorial-large-number/

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
  int res[MAX];
  res[0] = 1;
  int res_size = 1;
  for(int i=2; i<=n ; i++){
    res_size = multiply(i, res, res_size);
  }
  cout << "factorial of give number " << n <<"\t is given size \t"<< res[1] << "\n";
  for(int i=res_size-1; i>=0; i--){
    cout << res[i];
  }
}

int multiply(int i, int res[], int res_size)
{
  int carry = 0;
  for(int i=0; i<res_size; i++){
    int prod = res[i] * i + carry;
    res[i] = prod % 10; // store the last digit of prod in res[i]
    carry = prod / 10; // put the rest in carry
  }

  while(carry){
    res[res_size] = carry%10;
    carry = carry/10;
    res_size++;
  }
  return res_size;
}


int main()
{
  factorial(100);
  return 0;
}
