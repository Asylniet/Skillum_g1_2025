#include <iostream>
#include <map>
#include <set>

using namespace std;

// mp["kuanysh"] = { 24, 23 }
// mp["asylniet"] = { 24, 25, 23, 22, 21, 20 }

// 5
// kuanysh 24
// asylniet 24
// asylniet 25
// kuanysh 24
// kuanysh 23
// asylniet 23
// asylniet 22
// asylniet 21
// asylniet 20

// asylniet +2 BONUS
// kuanysh NO BONUS

int main() {
  int n;
  cin >> n;

  map<string, set<int> > mp;
  for(int i = 0; i < n; i++) {
    string name;
    int date;
    cin >> name >> date;

    mp[name].insert(date);
  }

  for(map<string, set<int> >::iterator it = mp.begin(); it != mp.end(); it++) {
    int bonus = it->second.size() / 3;
    cout << it->first << " ";
    if(bonus < 1) {
      cout << "NO BONUS";
    } else {
      cout << "+" << bonus << " BONUSES";
    }
    cout << endl;
  }

  return 0;
}