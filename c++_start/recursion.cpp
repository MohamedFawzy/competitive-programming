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

void printNumber(int n)
{
  if(n){
    printNumber(n/10);
    cout << n%10;
  }
}

void printNumberBits(int n)
{
  if(n){
    printNumberBits(n/2);
    cout << n%2;
  }
}

void perm(int i, int n, int vis[], int curr[])
{
  if(i==n){
    for(int j=0; j<n;j++){
      cout << curr[j];
    }
    cout <<"\n";
    return;
  }

  for(int j=0; j<n; j++){
    if(!vis[j]){
      vis[j] = 1;
      curr[i] = j;
      perm(i+1, n, vis, curr);
      vis[j] = 0;
    }
  }
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
  printNumber(214);
  cout <<"\n";
  printNumberBits(214);
  int vis[100];
  int curr[100];
  perm(0, 5, vis, curr);
  return 0;
}
