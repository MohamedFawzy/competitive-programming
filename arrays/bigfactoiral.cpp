#include <iostream>
using namespace std;
#define MAX 50000
//https://www.geeksforgeeks.org/factorial-large-number/

void factorial(int n);
int multiply(int x, int ar[], int ar_size);

void factorial(int n)
{

  int ar[MAX];
  ar[0]=1;
  int ar_size = 1;
  for(int i=2; i<=n; i++){
    ar_size = multiply(i, ar, ar_size);
  }

  // print the result
  cout << "facotrial for given number " << n << " is the following \n";
  for(int i=ar_size-1; i>=0; i--){
    cout << ar[i];
  }

}

int multiply(int x, int ar[], int ar_size)
{

  int carry = 0;
  for(int i=0; i<ar_size; i++){
    int prod = ar[i] * x + carry;
    ar[i] = prod%10;
    carry = prod/10;
  }

  while(carry){
    ar[ar_size] = carry%10;
    carry = carry / 10;
    ar_size++;
  }
  return ar_size;
}


int main()
{
  factorial(1000);
  return 0;
}
