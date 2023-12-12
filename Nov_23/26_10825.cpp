#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
  string name;
  int kor, eng, math;
};

bool compare(student x, student y) {
  if (x.kor == y.kor && x.eng == y.eng && x.math == y.math)
    return x.name < y.name;

  if (x.kor == y.kor && x.eng == y.eng)
    return x.math > y.math;

  if (x.kor == y.kor)
    return x.eng < y.eng;

  return x.kor > y.kor;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<student> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].math;
  }

  sort(p.begin(), p.end(), compare);

  for (int i = 0; i < n; i++) {
    cout << p[i].name << "\n";
  }

  return 0;
}