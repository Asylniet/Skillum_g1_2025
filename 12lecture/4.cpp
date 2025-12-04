#include <iostream>

using namespace std;

// 1 2 3 5 8 13 21

int fibonacci(int index) {
  if(index <= 2) return index;
  return fibonacci(index - 1) + fibonacci(index - 2);
}


int main() {
  cout << fibonacci(6);
  return 0;
}