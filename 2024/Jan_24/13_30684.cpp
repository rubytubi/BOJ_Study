#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> list;

  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;

    if (name.length() == 3) {
      list.push_back(name);
    }
  }

  sort(list.begin(), list.end());

  cout << list[0];

  return 0;
}
