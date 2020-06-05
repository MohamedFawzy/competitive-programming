#include <iostream>
#include <cmath>
using namespace std;

void primes_in_range(int n)
{
  bool arr[n];
  fill_n(arr, n, true);
  arr[0] = arr[1] = false;
  // cout << arr[0] << "\t" << arr[1] << endl;
  // cout << "================\n";
  // for(int i=0; i<5; i++){
  //   cout << arr[i] << endl<<flush;
  // }

  int k = sqrt(n);

  for(int i=2; i<k; i++){
    if(arr[i]){
      for(int j=i+1; j<n; j++){
        if(j%i==0){
          arr[j]=false;
        }
      }
    }
  }

  for(int i=0; i<n; i++){
    cout << i << " : "<<  arr[i] << "\t";
  }

}


int main()
{

  primes_in_range(25);
  return 0;
}
