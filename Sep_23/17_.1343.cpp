#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  char board[51] =
      {
          0,
      },
       res[51] = {
           0,
       };
  cin >> board;

  int num = 0;
  for (int i = 0; i < 51; i++) {
    if (board[i] == 'X') {
      num++;
      if (num == 2) {
        res[i] = 'B';
        res[i - 1] = 'B';
      } else if (num == 4) {
        res[i] = 'A';
        res[i - 1] = 'A';
        res[i - 2] = 'A';
        res[i - 3] = 'A';
        num = 0;
      }
    } else {
      if (num % 2 == 1) {
        cout << "-1\n";
        return 0;
      }
      num = 0;
      res[i] = board[i];
      if (board[i] == '\n')
        break;
    }
  }
  cout << res << '\n';
  return 0;
}