#include <iostream>
#include <map>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, card;

  cin >> n;

  map<int, int> s_card;

  for (int i = 0; i < n; i++) {
    cin >> card;
    s_card[card]++; // card가 key(index)가 된다.
  }

  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> card;
    cout << s_card[card] << ' ';
  }

  cout << '\n';

  return 0;
}