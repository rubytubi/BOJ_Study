#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, count = 0;
  int check;
  cin >> n;

  string name;

  map<string, int> user;
  for (int i = 0; i < n; i++) {
    check = 0;
    cin >> name;
    if (name == "ENTER") {
      user.clear();
    } else {
      if (user.count(name) == 0) {
        check = 1;
        user.insert(make_pair(name, check));
        count++;
      }
    }
  }

  cout << count << '\n';

  return 0;
}