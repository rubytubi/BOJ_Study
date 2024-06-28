#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  float h = (float)t / 2.0;

  cout << (int)(h * h + 0.5) << "\n";

  return 0;
}