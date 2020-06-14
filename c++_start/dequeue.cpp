#include <iostream>
#include <deque>
using namespace std;

void dequeueBasicTest()
{
  deque<int> dq;
  dq.push_back(20);
  dq.push_front(10);
  
}

int main()
{
  dequeueBasicTest();
  return 0;
}
