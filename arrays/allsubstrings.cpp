#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void print_all_sub_strings(string a, int n)
{

  for(int i=0; i<n ; i++){
    for(int j=1; j <= n-i; j++){
      cout << a.substr(i, j) << ",";
    }
    cout << "\n";
  }

}


int main()
{
  string a = "123a";
  print_all_sub_strings(a, a.length());
  return 0;
}
