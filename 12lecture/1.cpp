#include <iostream>

using namespace std;

void sayHello(string name, int index) {
  char digit = index + '0';
  cout << "Hello, " << name << endl;
  if(index <= 5) {
    sayHello(name + digit, index + 1);
  }
}


int main() {
  sayHello("Asylniet", 1);
  return 0;
}