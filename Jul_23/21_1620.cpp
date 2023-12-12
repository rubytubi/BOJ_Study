#include <iostream>
#include <map>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  map<string, int> name;
  map<int, string> num;

  string pokemon;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> pokemon;
    name.insert({pokemon, i + 1});
    num.insert({i + 1, pokemon});
  }

  for (int i = 0; i < m; i++) {
    cin >> pokemon;
    if (isdigit(pokemon[0]) == 0)
      cout << name[pokemon] << '\n';
    else
      cout << num[stoi(pokemon)] << '\n';
  }

  return 0;
}