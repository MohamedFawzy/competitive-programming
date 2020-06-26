#include <iostream>
using namespace std;

void sayIamTopCoder(int cnt)
{
  if(cnt < 1){ // base case
    return;
  }

  cout << "I am topcoder"<<endl; // some logic
  sayIamTopCoder(cnt-1); // sub-problem never goes to infity
}

int fact(int n)
{
  if(n <= 1){
    return 1;
  }
  return n * fact(n-1);
}

void triangle(int x)
{
  if(x <= 0) return; // base case

  triangle(x-1); // sub problem
  for(int i=1; i<=x; i++){ // some logic
    cout << "*";
  }
  cout <<endl;
}

void trianglerev(int x)
{
  if(x <= 0) return; // base case
  for (int i = 1; i <=x; i++) { // some logic
    /* code */
    cout << "*";
  }
  cout << endl;
  trianglerev(x-1); // sub-problem
}

// 3n+1 series
int f3n_1(int n)
{
  if(n==1) return 1; // base case
  if(n%2==0){
    return 1 + f3n_1(n/2);
  }
  return 1 + f3n_1(3*n+1);
}

int main()
{
  sayIamTopCoder(10);
  int result = fact(4);
  cout << result <<endl;
  triangle(5);
  cout << "\n\n\n\n";
  trianglerev(5);
  f3n_1(22);
  return 0;
}
