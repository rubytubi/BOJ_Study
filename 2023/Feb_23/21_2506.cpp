#include <iostream>
using namespace std;

int main() {
  int n, count = 0, sum = 0;
  cin >> n;

  int *num = new int[n];
  if (num == NULL) {
    cout << "fail.\n";
    return 1;
  }

  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  for (int i = 0; i < n; i++) {

    if (num[i] == 1)
      count++;

    else if (num[i] == 0)
      count = 0;

    sum += count;
  }

  cout << sum << "\n";

  delete[] num;
  num = NULL;

  return 0;
}