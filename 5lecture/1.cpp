#include <iostream>
#include <map>
#include <cmath>

using namespace std;

map<string, int> nums = { 
  {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4}, {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}, {"ZER", 0}
};

map<int, string> strings = {
  {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"}, {5, "FIV"}, {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}, {0, "ZER"}
};

int convertToNum(string s) {
  int numOfDigits = s.size() / 3;

  int num = 0;

  for(int i = 0; i < numOfDigits; i++) {
    string numStr = s.substr(i * 3, 3);
    int digit = nums[numStr];
    num += digit * pow(10, numOfDigits - 1 - i);
  }

  return num;
}

int main() {
  string s = "FOUFIVSIX-TWO";

  char operators[4] = {'+', '-', '*', '/'};

  int operatorIndex = -1;

  for(int i = 0; i < 4; i++) {
    int index = s.find(operators[i]);
    if(index != string::npos) {
      operatorIndex = index;
    }
  }

  string firstPart = s.substr(0, operatorIndex);
  string secondPart = s.substr(operatorIndex + 1);

  int sum = 0;
  if(s[operatorIndex] == '+') {
    sum = convertToNum(firstPart) + convertToNum(secondPart);
  } else if (s[operatorIndex] == '-') {
    sum = convertToNum(firstPart) - convertToNum(secondPart);
  } else if (s[operatorIndex] == '/') {
    sum = convertToNum(firstPart) / convertToNum(secondPart);
  } else if (s[operatorIndex] == '*') {
    sum = convertToNum(firstPart) * convertToNum(secondPart);
  }


  string result = "";
  while(sum > 0) {
    int digit = sum % 10;
    string digitStr = strings[digit];
    result = digitStr + result;
    sum /= 10;
  }

  cout << result;

  return 0;
}