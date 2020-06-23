#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> vi;

int main()
{
  string s = "";
  s.assign("lol");
  cout << s << endl;
  vector<string> v;
  v.push_back(s);
  for(auto i=v.begin(); i != v.end(); ++i){
    i->append("Hello world");
  }
  cout << "\n";

  vi::iterator it = v.begin();
  while(it != v.end()){
    cout << (*it) << " ";
    it++;
  }

  return 0;
}
