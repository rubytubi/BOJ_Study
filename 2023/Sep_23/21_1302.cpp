#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n, count = 0;
  string name;
  cin >> n;

  map<string, int> book;

  for (int i = 0; i < n; i++) {
    cin >> name;
    book[name]++;
  }
  for (auto i = book.begin(); i != book.end(); i++) {
    count = max(count, i->second);
  }

  for (auto i = book.begin(); i != book.end(); i++) {
    if (count == i->second) {
      cout << i->first;
      return 0;
    }
  }
  return 0;
}