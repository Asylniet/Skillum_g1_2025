#include <iostream>
#include <stack>

using namespace std;

// 4
// 2 1 0 0

int main() {
  int n;
  cin >> n;

  stack<int> st;
  bool hasSold = false;

  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x == 0) {
      cout << st.top() << " ";
      st.pop();
      
      hasSold = true;
    } else {
      st.push(x);
    }
  }

  if(!hasSold) cout << -1;

  return 0;
}