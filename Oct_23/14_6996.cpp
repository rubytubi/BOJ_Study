#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  char a[101];
  char b[101];

  while (t--) {
    cin >> a >> b;

    if (strlen(a) != strlen(b)) {
      cout << a << " & " << b << " are NOT anagrams.\n";
      continue;
    }

    char copy_a[101];
    char copy_b[101];
    strcpy(copy_a, a);
    strcpy(copy_b, b);

    sort(copy_a, copy_a + strlen(copy_a));
    sort(copy_b, copy_b + strlen(copy_b));

    if (strcmp(copy_a, copy_b) == 0)
      cout << a << " & " << b << " are anagrams.\n";
    else
      cout << a << " & " << b << " are NOT anagrams.\n";
  }

  return 0;
}