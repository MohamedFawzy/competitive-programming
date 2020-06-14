#include <iostream>
#include <queue>
using namespace std;

void prirorityQueueBasicTest()
{
  priority_queue<int> pq;
  pq.push(20);
  pq.push(10);
  pq.push(30);
  while(!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << "\n";
}


int main()
{
  prirorityQueueBasicTest();
  return 0;
}
