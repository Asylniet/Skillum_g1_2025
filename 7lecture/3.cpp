// HOMEWORK

// INPUT:
// First line: given s - the size of a canvas and n - the number of rows
// The next n rows: given 4 numbers separated by space: the coordinates of the rectangles

// OUPUT:
// calculate the area of the rectangles


#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int a[n][n];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      a[i][j] = 0;
    }
  }

  for(int i = 0; i < m; i++) {
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    for(int j = n - y2; j < n - y1; j++) {
      for(int k = x1; k < x2; k++) {
        a[j][k] = 1;
      }
    }
  }

  int count = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i][j] == 1) count++;
    }
  }

  cout << count;

  return 0;
}