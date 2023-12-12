#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct coordinate {
  int x;
  int y;
};

bool compare(coordinate n, coordinate m) {
  if (n.y > m.y)
    return false;
  else if (n.y == m.y && n.x > m.x)
    return false;
  else
    return true;
}

int main() {
  int N;
  cin >> N;
  vector<coordinate> p(N);

  for (int i = 0; i < N; i++) {
    cin >> p[i].x >> p[i].y;
  }

  stable_sort(p.begin(), p.end(), compare);

  for (int i = 0; i < N; i++) {
    cout << p[i].x << ' ' << p[i].y << "\n";
  }

  return 0;
}