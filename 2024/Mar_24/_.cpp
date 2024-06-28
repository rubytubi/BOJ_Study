#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> arr(101, vector<int>(101, 0));
vector<int> ret;

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int p, l;
    cin >> p >> l;
    for (int j = 1; j <= p; j++) {
      cin >> arr[i][j];
    }
    sort(arr[i].begin(), arr[i].end());

    int score = arr[i];
  }

  return 0;
}