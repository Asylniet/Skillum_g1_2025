#include <iostream>

using namespace std;

int main() {
  string s = "abc-abc-abcasda1asd;asdas";
  for(int i = 0; i < s.size(); i++) {
    char letter = tolower(s[i]);
    if(letter >= 'a' && letter <= 'z') cout << letter
  }
  return 0;
}