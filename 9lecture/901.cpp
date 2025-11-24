#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sortingFunc(int a, int b) {
  return a > b;
}

int main() {
  int n;
  cin >> n;

  vector<int> v;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end(), sortingFunc);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}