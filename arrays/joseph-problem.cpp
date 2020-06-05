#include <iostream>
using namespace std;
/**
given array as circle [1,2,3,4,5,6,7] and k=3
find the last surivovr of the executed peoples in the array
let N=7 k=3
1,2,3,4,5,6,7
first time count 3 and kill 3
second time 1,2,4,5,6,7
1,2,4,5,6,7
**/

int solution(int n, int k)
{

  if(n==1){
    return 1;
  }else{
    return (solution(n-1, k) + k-1) % n+1;
  }
}


int main()
{
  int result = solution(7,3);
  cout << "result: " << result<<endl;
  return 0;
}
