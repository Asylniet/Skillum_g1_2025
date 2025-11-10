#include <iostream>
#include <vector>

using namespace std;

int sortingFunc(int a, int b) {
  if(a == b) return 1;
  return a > b;
}

int main() {
  vector<int> v;

  for(int i = 20; i >= 1; i--) {
    v.push_back(i);
    v.push_back(i * 2);
  }


  // cout << st.rbegin()->first;
  // cout << st.end()->first;

  sort(v.begin(), v.end(), sortingFunc);
  // reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}