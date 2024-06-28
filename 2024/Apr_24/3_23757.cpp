#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

priority_queue<int> q;
int child[100010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    q.push(temp);
  }

  for (int i = 0; i < m; i++) {
    cin >> child[i];
  }

  for (int i = 0; i < m; i++) {
    int present = q.top();
    if (present >= child[i]) {
      present -= child[i];
      q.pop();
      q.push(present);
    }

    else {
      cout << "0\n";
      return 0;
    }
  }

  cout << "1\n";

  return 0;
}