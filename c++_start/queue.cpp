#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

void queueBasicTest()
{
  queue<int> q;
  q.push(20);
  q.push(10);
  q.push(30);
  cout << "Last element in queue: " << q.back() << "\n";
  cout << "Queue elements: ";
  while(!q.empty())
  {
    cout << q.front()<<" ";
    q.pop();
  }
}

int main()
{
  queueBasicTest();
  return 0;
}
