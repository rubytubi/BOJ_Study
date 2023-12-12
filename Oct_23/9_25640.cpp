#include <iostream>
#include <string>

using namespace std;

string j_mbti, mbti;
int n, ans;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> j_mbti >> n;

  while (n--) {
    cin >> mbti;

    if (j_mbti == mbti)
      ans++;
  }
  cout << ans << "\n";

  return 0;
}