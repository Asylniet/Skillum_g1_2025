#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  string temp = "";
  bool hasNumber = false;
  for(int i = 0; i < s.size(); i++) {
    temp += s[i];

    if(s[i] >= '0' && s[i] <= '9') {
      hasNumber = true;
    }

    if(s[i] == ' ' || i == s.size() - 1) {
      if(!hasNumber) cout << temp << endl;
      temp = "";
      hasNumber = false;
    }
  }

  return 0;
}