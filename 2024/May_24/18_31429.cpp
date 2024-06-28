#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int score[] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
  int p[] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

  cout << score[n - 1] << " " << p[n - 1] << "\n";

  return 0;
}