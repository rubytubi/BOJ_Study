#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  queue<int> josephus;

  for (int i = 1; i <= n; i++) {
    josephus.push(i);
  }

  cout << "<";

  while (!josephus.empty()) {
    for (int i = 1; i < k; i++) {
      josephus.push(josephus.front()); // 맨 앞 숫자 맨 뒤로 넣고 맨 앞 숫자 pop
      josephus.pop();
    }
    cout << josephus.front(); // k 번째 숫자(사람) 출력
    josephus.pop();           // k 번째 숫자(사람) pop

    if (!josephus.empty()) {
      cout << ", ";
    }
  }
  cout << ">" << '\n';

  return 0;
}
