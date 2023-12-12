#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  int score[5] = {
      0,
  };
  for (int i = 0; i < t; i++) {
    cin >> score[i];
  }

  long long id = 0;

  if (score[0] > score[2])
    id += (score[0] - score[2]) * 508;
  else
    id += (score[2] - score[0]) * 108;

  if (score[1] > score[3])
    id += (score[1] - score[3]) * 212;
  else
    id += (score[3] - score[1]) * 305;

  if (t == 5)
    id += score[t - 1] * 707;

  id *= 4763;

  cout << id << "\n";

  return 0;
}
