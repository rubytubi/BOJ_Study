#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int Ai, Bi, Xi;
    cin >> Ai >> Bi >> Xi;

    int Wi = Ai * (Xi - 1) + Bi;
    cout << Wi << '\n';
  }

  return 0;
}
