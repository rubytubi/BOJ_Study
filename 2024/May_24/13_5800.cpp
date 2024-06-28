#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  int t;
  cin >> t;

  for (int j = 1; j <= t; j++) {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      v.push_back(t);
    }

    sort(v.begin(), v.end());

    int gap = 0;

    for (int i = 1; i < n; i++) {
      gap = max(gap, v[i] - v[i - 1]);
    }

    cout << "Class " << j << "\n"
         << "Max " << v[v.size() - 1] << ", Min " << v[0] << ", Largest gap "
         << gap << "\n";

    v.clear();
  }
  return 0;
}