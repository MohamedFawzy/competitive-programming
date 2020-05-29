#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int iCount=0;
  for(int i=1; i<=100; i++){
    if(i % 4==0){
      iCount++;
    }else if(i % 6 == 0 && i % 10 == 0){
      iCount++;
    }

  }

  cout << iCount;

  return 0;
}
