#include <iostream>
#include <stack>
using namespace std;

// (()()) -> YES
// ((()())) -> NO

int main() {
  string s;
  cin >> s;

  stack<char> st;

  for(int i = 0; i < s.size(); i++) {
    char bracket = s[i];
    if(!st.empty() && st.top() == '(' && bracket == ')') {
      st.pop();
    } else {
      st.push(bracket);
    }
  }

  st.empty() ? cout << "YES" : cout << "NO";

  return 0;
}