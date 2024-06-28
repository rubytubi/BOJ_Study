#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> side(3);

  for (int i = 0; i < 3; i++) {
    cin >> side[i];
  }

  sort(side.begin(), side.end());

  if (side[0] * side[0] + side[1] * side[1] == side[2] * side[2])
    cout << "1";
  else if (side[0] == side[1] && side[1] == side[2])
    cout << "2";
  else
    cout << "0";

  return 0;
}
