#include <iostream>
#include <deque>

using namespace std;

int main() {
  deque<int> q;

  q.push_back(10);
  q.push_back(20);
  q.push_back(30);
  q.push_back(40);

  cout << q.size() << endl;

  while(!q.empty()) {
    cout << q.back() << endl;
    q.pop_back();
  }

  return 0;
}