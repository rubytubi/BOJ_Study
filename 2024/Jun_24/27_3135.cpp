#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<int> fav;
int cnt;
int mini = 20000000;

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  for (int i = 0; i < n; i++) {
    int h;
    cin >> h;

    fav.push_back(h);
  }

  for (int i = 0; i < fav.size(); i++) {
    if (b == fav[i]) {
      cnt++;
      cout << cnt << "\n";
      return 0;
    }
    mini = min(mini, abs(b - fav[i]));
  }

  if (abs(b - a) > mini) {
    a = mini;
    cnt++;
    cnt += a;
  }

  else
    cnt = abs(b - a);

  cout << cnt << "\n";

  return 0;
}