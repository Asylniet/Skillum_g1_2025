#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> mp;

  for(int i = 10; i >= 1; i--) {
    mp[i] = 100;
    mp[i * 2] = 200;
  }

  // cout << mp.rbegin()->first;
  // cout << mp.end()->first; 

  // for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
  //   cout << it->first << ":" << it->second << endl;
  // }

  for(map<int, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
    cout << it->first << ":" << it->second << endl;
  }

  return 0;
}