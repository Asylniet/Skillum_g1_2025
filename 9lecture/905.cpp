#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  int max = v[v.size() - 1];

  int max2;

  for(int i = v.size() - 1; i >= 0; i--) {
    if(v[i] != max) {
      max2 = v[i];
      break;
    }
  }

  return 0;
}

// 7 4 5 7 1 7 2 7
// max = last_element
// 1 2 4 5 7 7 7 7