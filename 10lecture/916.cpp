#include <iostream>

using namespace std;

// 5
// 10 11 4 1 6
//  0  1 2 3 4

//  6 7 3 1 6

int main() {
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    int price = a[i];
    int discount = 0;

    for(int j = i + 1; j < n; j++) {
      if(a[j] <= a[i]) {
        discount = a[j];
        break;
      }
    }

    cout << price - discount << " ";
  }

  return 0;
}