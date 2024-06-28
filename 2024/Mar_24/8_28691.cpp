#include <iostream>
#include <string>

using namespace std;

int main() {
  char first;
  cin >> first;

  string club;

  if (first == 'M') {
    club = "MatKor";
  } else if (first == 'W') {
    club = "WiCys";
  } else if (first == 'C') {
    club = "CyKor";
  } else if (first == 'A') {
    club = "AlKor";
  } else if (first == '$') {
    club = "$clear";
  } else {
    club = "Unknown";
  }

  cout << club << "\n";

  return 0;
}
