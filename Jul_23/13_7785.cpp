#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  string name, situation;
  set<string> company;

  for (int i = 0; i < n; i++) {
    cin >> name >> situation;

    if (situation == "enter")
      company.insert(name);
    else
      company.erase(name);
  }

  for (auto it = company.rbegin(); it != company.rend(); it++) {
    cout << *it << "\n";
  }

  return 0;
}