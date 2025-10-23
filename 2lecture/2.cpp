#include <iostream>

using namespace std;

int main() {
  int size = 8;

  int row;
  int column;

  cin >> row >> column;

  for(int i = 1; i <= size; i++) {
    for(int j = 1; j <= size; j++) {
      // i == row -> cout << "1"
      // j == column -> cout << "1"
      if(i == row && j == column) {
        cout << "x ";
      } else if(
        i == row || 
        j == column || 
        i == (column + row) - j ||
        j == i + (column - row)
      ) {
        cout << "* ";
      } else {
        cout << 0 << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
