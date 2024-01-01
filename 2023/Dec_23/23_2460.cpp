#include <iostream>

using namespace std;

int main() {
  int in[10];
  int out[10];
  int max = 0;
  int p = 0;

  for (int i = 0; i < 10; i++) {
    cin >> in[i] >> out[i];

    p = out[i] - in[i] + p;
    if (max < p)
      max = p;
  }

  cout << max << endl;

  return 0;
}