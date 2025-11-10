#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> st;

  for(int i = 20; i >= 1; i--) {
    st.insert(i);
    st.insert(i * 2);
  }

  // cout << st.rbegin()->first;
  // cout << st.end()->first; 

  // for(set<int>::iterator it = st.begin(); it != st.end(); it++) {
  //   cout << *it << endl;
  // }

  for(set<int>::reverse_iterator it = st.rbegin(); it != st.rend(); it++) {
    cout << *it << endl;
  }

  return 0;
}