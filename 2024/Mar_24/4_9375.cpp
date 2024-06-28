#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  int n;
  string key, value;

  for (int i = 0; i < t; i++) {
    map<string, int> clothes;
    cin >> n;

    for (int j = 0; j < n; j++) {
      cin >> value >> key;

      if (clothes.find(key) == clothes.end())
        clothes.insert({key, 1});

      else
        clothes[key]++;
    }
    int count = 1;

    for (auto i : clothes) {
      count *= (i.second + 1);
    }

    cout << count - 1 << "\n";
  }

  return 0;
}