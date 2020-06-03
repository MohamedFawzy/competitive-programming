#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string str1)
{
  string str2 = "9999";
  // make sure first string is the lowest and second one is the larger
  if(str1.length() > str2.length()){
    swap(str1, str2);
  }

  int n1 = str1.length();
  int n2 = str2.length();

  int diff = n2 - n1;

  string result = "";

  int carry = 0;
  // loop from end to begining
  for(int i=n1-1; i>=0; i--){
    int sum = ((str1[i] - '0') + (str2[i+diff] - '0') + carry);
    result.push_back(sum%10 + '0');

    carry  = sum / 10;
  }

  // add remaning digits of string 2
  for(int i=n2-n1-1; i >= 0; i--){
    int sum = ((str2[i]-'0') + carry);
    result.push_back(sum%10 + '0');
    carry = sum / 10;
  }

  if(carry){
    result.push_back(carry+'0');
  }

  reverse(result.begin(), result.end());
  return result;

}

int main()
{

  /**                  1  1   1    1
    12345678912345678912 3  4   5    6
                         9  9   9   9
    ______________________________
    1234567891234567891 3 3  4    5   5
  **/
  string x = "123456789123456789123456";
  string result = add(x);

  cout << "result " << result << "\n";

  return 0;
}
