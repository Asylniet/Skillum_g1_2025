#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  // 3
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j || i == n - 1 - j) {
        cout << 1 << " ";
      } else {
        cout << 0 << " ";
      }
      // i == j ? cout << 1 << " " : cout << 0 << " ";
    }
    cout << endl;
  }

  // i = 0, j = 2, n = 3
  // i = 1, j = 1, n = 3
  // i = 2, j = 0, n = 3
  // i = n - 1 - j

  // int i = 0;
  // while(i < n) {
  //   cout << i << endl;
  //   i++;
  // }

  return 0;
}