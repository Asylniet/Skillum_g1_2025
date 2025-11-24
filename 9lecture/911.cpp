#include <iostream>
#include <map>

using namespace std;

// 2
// 2
// Oral 10
// Oskemen 20
// 3
// Almaty 30
// Oral 20
// Pavlodar 5

  // 85

  // almaty = 35%
  // oral = 35%
  // oskemen = 23%
  // pavlodar = 5%

int main() {
  int days;
  cin >> days;
  map<string, int> mp;

  int sum = 0;
  for(int i = 0; i < days; i++) {
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) {
      string city;
      int documents_count;
      cin >> city >> documents_count;
      
      sum += documents_count;
      mp[city] += documents_count;
    }
  }

  for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    double result = it->second / double(sum) * 100;
    cout << it->first << " " << result << endl;
  }

  return 0;
}