#include <iostream>

using namespace std;

// 3
// 1 0 23 0
// 12 0 12 0
// 22 0 2 0

// 22:00 - 1320
// 02:00 - 120

// 1320-1440 -> 0->120

int main() {
  int n;
  cin >> n;

  int MINUTES_IN_DAY = 24 * 60;
  int a[MINUTES_IN_DAY];

  for(int i = 0; i < MINUTES_IN_DAY; i++) {
    a[i] = 0;
  }

  int fullDayShops = 0;

  for(int i = 0; i < n; i++) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int start = A * 60 + B;
    int end = C * 60 + D;

    if(start == end) {
      fullDayShops++;
    } else if(start < end) {
      for(int j = start; j < end; j++) {
        a[j]++;
      }
    } else {
      for(int j = start; j < MINUTES_IN_DAY; j++) {
        a[j]++;
      }

      for(int j = 0; j < end; j++) {
        a[j]++;
      }
    }
  }

  int count = 0;

  for(int i = 0; i < MINUTES_IN_DAY; i++) {
    if(a[i] == n - fullDayShops) count++;
  }

  cout << count;

  return 0;
}