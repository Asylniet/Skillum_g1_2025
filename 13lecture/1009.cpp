#include <iostream>
#include <vector>

using namespace std;

struct Student {
  string id, name;
  float average;
};

int main() {
  int n;
  cin >> n;

  vector<Student> v;

  for(int i = 0; i < n; i++) {
    string id, name;
    cin >> id >> name;
    int calc, eng, pp1;
    cin >> calc >> eng >> pp1;

    float average = (calc + eng + pp1) / 3.0;

    Student s;
    s.id = id;
    s.name = name;
    s.average = average;

    v.push_back(s);
  }

  Student max = v[0];
  for(int i = 0; i < v.size(); i++) {
    cout << v[i].id << " " << v[i].name << " " << v[i].average << endl;

    if(max.average < v[i].average) {
      max = v[i];
    }
  }

  cout << "The best student " << max.name << " with the average score of " << max.average;
  return 0;
}