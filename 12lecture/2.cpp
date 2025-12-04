// (2 * 6) + (5 / 9) + 0
// A + B + C
// A B + C +

// 2 6 * 5 9 / + 0 +

// 4 - 5 + 2
// 4 5 - 2 +

// 4 - (5 + 2)

// 4 - 2
// 4 5 2 + -

#include <iostream>
#include <string>

using namespace std;

string postfix(string s) {
  string firstNum, operation, secondNum;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ') continue;
    
    if(s[i] == '-' || s[i] == '+' || s[i] == '/' || s[i] == '*') {
      if(operation != "") {
        firstNum += " " + secondNum + " " + operation;
        secondNum = "";
      }
      operation = s[i];
    }
    
    if(s[i] == '(') {
      int closeIndex = s.find(')', i);
      string scope = s.substr(i + 1, closeIndex - i - 1);
      i = closeIndex;

      if(operation == "") {
        firstNum = postfix(scope);
      } else {
        secondNum = postfix(scope);
      }

      continue;
    }

    if(!isdigit(s[i])) continue;

    if(operation == "") {
      firstNum += s[i];
    } else {
      secondNum += s[i];
    }
  }
  
  return firstNum + " " + secondNum + " " + operation;
}

int main() {
  string s;
  getline(cin, s);

  cout << postfix(s);
  return 0;
}