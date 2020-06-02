#include <iostream>
#include <assert.h>
#include <algorithm>
#include <string>
using namespace std;


bool first_string_less_than_2nd(string a, string b)
{

  int a_data = 0;
  for(int i=0; i < a.length(); i++){
    a_data += int(a[i]);
  }

  int b_data = 0;
  for(int i=0; i < b.length(); i++){
    b_data += int(b[i]);
  }

  return a_data < b_data;
}


int main()
{
  string a = "aa";
  string b = "aaaaa";
  bool answer = b < a;
  bool myAnswer = first_string_less_than_2nd(b, a);
  cout << answer << "\n";
  cout << myAnswer << "\n";
  return 0;
}
