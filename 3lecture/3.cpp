#include <iostream>
#include <string>

using namespace std;

// "abca"
// a - a ->
// b - c -x ---- "aca" || "aba" -- YES

// "abcgba"
// a - a ->
// b - b ->
// c - g -x ---- "abgba" || "abcba" -- YES


// "asdga"
// a - a ->
// s - g -X ---- "adga" || "asda" -- NO

bool isPalindrome(string s) {
  for(int i = 0; i < s.size() / 2; i++) {
    int end_index = s.size() - 1 - i;
    if(s[i] != s[end_index]) {
      return false;
    }
  }

  return true;
}

string removeChar(string s, int index) {
  string newStr = "";
  for(int i = 0; i < s.size(); i++) {
    if(i != index) newStr += s[i];
  }
  return newStr;
}


int main() {
  string s;
  cin >> s;
  
  for(int i = 0; i < s.size() / 2; i++) {
    int end_index = s.size() - 1 - i;
    if(s[i] != s[end_index]) {
      string firstStr = removeChar(s, i);
      string secondStr = removeChar(s, end_index);
      if(!isPalindrome(firstStr) && !isPalindrome(secondStr)) {
        cout << "NO";
        return 0;
      }
    }
  }

  cout << "YES";

  return 0;
}