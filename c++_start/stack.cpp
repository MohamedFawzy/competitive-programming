#include <iostream>
#include <stack>
using namespace std;

void testStack()
{
  stack<int> s;
  s.push(20);
  s.push(10);
  s.push(30);
  while(!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << "\n";
}


int main()
{
  testStack();
  return 0;
}
