#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> even;
  vector<int> odd;

  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x % 2 == 0) {
      even.push_back(x);
    } else {
      odd.push_back(x);
    }
  }

  for(int i = 0; i < even.size(); i++) {
    cout << even[i] << " ";
  }

  cout << endl;

  for(int i = 0; i < odd.size(); i++) {
    cout << odd[i] << " ";
  }

  return 0;
}