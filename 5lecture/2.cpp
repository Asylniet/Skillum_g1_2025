#include <iostream>
#include <map>

using namespace std;

int main() {
  // 3 2 4 7 11
  // 10


  // int cnt = 0;
  // for(int i = 1; i <= 1000; i++) {
  //   if(v.find(i) == not_found) {
  //     cnt++;
  //   }

  //   if(cnt == 10) {
  //     cout << i;
  //     break; return;
  //   }
  // }
  
  // 3 2 4 7 11 | 1 5 6 8 9 10 12 13 14 15

  int x;
  map<int, int> mp;
  while(cin >> x) {
    mp[x] = 1;

    if(cin.peek() == '\n') break;
  }

  int target;
  cin >> target;

  int cnt = 0;
  int result = -1;

  for(int i = 1; i <= 1000; i++) {
    if(mp[i] != 1) {
      cnt++;
    }

    if(cnt == target) {
      result = i;
      break;
    }
  }

  cout << result;

  return 0;
}