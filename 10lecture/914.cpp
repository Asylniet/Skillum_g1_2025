#include <iostream>
#include <stack>

using namespace std;

// 6
// 3 5 3 2 4 1

// 1 1 2 3 2 3

int main() {
  int n;
  cin >> n;

  stack<int> st;

  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    while(!st.empty() && st.top() <= x) {
      st.pop();
    }

    st.push(x);
    cout << st.size() << " ";
  }
  return 0;
}