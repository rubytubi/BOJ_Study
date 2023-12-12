#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  string n;
  int age, weight;
  while (1) {
    cin >> n >> age >> weight;
    if (n == "#" && age == 0 && weight == 0)
      break;
    if (age > 17 || weight >= 80)
      cout << n << " Senior\n";
    else
      cout << n << " Junior\n";
  }
  return 0;
}