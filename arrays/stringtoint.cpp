#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <random>
#include <algorithm>
#include <assert.h>
using namespace std;


std::string random_string()
{
     std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

     std::random_device rd;
     std::mt19937 generator(rd());

     std::shuffle(str.begin(), str.end(), generator);

     return str.substr(0, 32);    // assumes 32 < number of characters in str
}


int string_to_int_native(string a)
{
  int result = 0;
  stringstream s(a);
  s >> result;

  return result;
}

int string_to_int(string a)
{
  stringstream s(a);
  a = "";
  s >> a;
  int i = 0;
  int sign = 1;
  long long result = 0;

  if(a[i]=='-' || a[i]=='+'){
    sign = (a[i++]=='-') ? -1 : 1;
  }

  while ('0' <= a[i] && a[i] <= '9'){
    result = result*10 + (a[i++]-'0');
    if(result * sign >= INT_MAX) return INT_MAX;
    if(result * sign <= INT_MIN) return INT_MIN;
  }

  return result * sign;

}

void test()
{

  for(int test=0; test<1000; test++){
    cout << "test " << test + 1 << "\n" << flush;
    string a = random_string();
    int correctAnswer = string_to_int_native(a);
    int myAnswer = string_to_int(a);
    assert(correctAnswer == myAnswer);
  }
  cout << "Prefect ";
}


int main()
{
  test();
  return 0;
}
