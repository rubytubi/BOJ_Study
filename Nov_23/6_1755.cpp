#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<string> num(10);
string read[100];

bool compare(int a, int b) { return read[a] < read[b]; }

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string num[10] = {"zero", "one", "two",   "three", "four",
                    "five", "six", "seven", "eight", "nine"};

  int m, n;
  cin >> m >> n;

  for (int i = m; i <= n; i++) {
    if (i < 10)
      read[i] = num[i];

    else
      read[i] = num[i / 10] + " " + num[i % 10];
  }

  vector<int> index;

  for (int i = m; i <= n; i++) {
    index.push_back(i);
  }

  sort(index.begin(), index.end(), compare);

  for (int i = 0; i < index.size(); i++) {
    if (i % 10 == 0 && i != 0)
      cout << "\n";

    cout << index[i] << " ";
  }

  cout << "\n";

  return 0;
}
