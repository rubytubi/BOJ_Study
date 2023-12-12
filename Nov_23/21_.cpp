#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, min_count = 0, flag = 0;
  cin >> n;

  vector<int> plus_num;
  vector<int> minus_num;

  int temp;
  long long res = 0;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp > 0)
      plus_num.push_back(temp);

    else if (temp == 0)
      flag++;

    else
      minus_num.push_back(temp);
  }

  sort(plus_num.rbegin(), plus_num.rend());
  sort(minus_num.begin(), minus_num.end());

  if (flag > 0 && (minus_num.size() % 2) == 1) {
    minus_num.erase(minus_num.begin());
    flag--;
  }

  for (int i = 0; i < plus_num.size() - 1; i++) {
    if (plus_num[i] == 1)
      res++;
    else {
      res += plus_num[i] * plus_num[i + 1];
    }
  }

  for (int i = 0; i < minus_num.size() - 1; i++) {
    if (minus_num[i] == 1)
      res++;
    else {
      res += minus_num[i] * minus_num[i + 1];
    }
  }

  return 0;
}