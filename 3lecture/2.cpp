#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i = 0; i < s.size() / 2; i++) {
    int end_index = s.size() - 1 - i;
    if(s[i] != s[end_index]) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}