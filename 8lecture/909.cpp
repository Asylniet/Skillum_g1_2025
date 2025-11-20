#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, pair<double, double> > mp;

  // mp["asman"] = { 8, 2 }

  // mp->first = "asman"
  // mp->second = { 8, 2 }
  // mp->second.first = 8
  // mp->second.second = 2

  for(int i = 0; i < n; i++) {
    string name;
    int gpa;
    cin >> name >> gpa;

    mp[name].first += gpa;
    mp[name].second++;
  }

  for(map<string, pair<double, double> >::iterator it = mp.begin(); it != mp.end(); it++) {
    pair<double, double> p = it->second;
    cout << it->first << ": ";
    printf("%.3f", p.first / p.second);
    cout << endl;
  }

  return 0;
}