#include <iostream>
#include <string>

using namespace std;

int main() {
  string scores;
  cin >> scores;

  int a_score = 0, b_score = 0, a_game = 0, b_game = 0;

  for (char c : scores) {
    if (c == 'A')
      a_score++;
    else
      b_score++;

    if (a_score == 21 || b_score == 21) {
      cout << a_score << "-" << b_score << "\n";

      if (a_score == 21)
        a_game++;
      else if (b_score == 21)
        b_game++;

      a_score = 0;
      b_score = 0;
    }

    if (a_game == 2 || b_game == 2)
      break;
  }

  if (a_game == 2)
    cout << "A\n";

  else if (b_game == 2)
    cout << "B\n";

  return 0;
}
