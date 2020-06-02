#include <iostream>
#include <algorithm>
#include <assert.h>
#include <sstream>
#include <string>
using namespace std;
/**
given a string divide it to consective groups of same value
e.g input : 111222aaabbb#
output : 111 222 aaa bbb #
input : HHHHH
output : HHHHH (1 group)
**/

string grouping(string str)
{

  string result = "";
  result += str[0]; // init with first value
  for(int i=1; i< str.length(); i++){
    if(str[i] == str[i-1]){
      //cout << "matched " << str[i] << "\n";
      result += str[i];
    }else{
      //cout << " not matched " << str[i] << "\n";
      result += " ";
      result += str[i];
    }
  }

  return result;
}


int main()
{
  string str = "111222aaabbb#";
  string result = grouping(str);
  string acutal_result = "111 222 aaa bbb #";
  assert(result == acutal_result);

  string str1 = "HHH";
  string result1 = grouping(str1);
  string correct = "HHH";
  assert(result1 == correct);
  
  cout << "Prefect";
  return 0;
}
