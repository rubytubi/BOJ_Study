#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 자릿수
// DFS실행 2, 3, 5, 7을 시작 수로 설정하여 시작.

// DFS 구현
//  DFS(num, cnt){
//      if(cnt == n){
//          if(소수) -> 출력
//          return
//      }
//      for(1 ~ 9 반복){
//          if(i가 홀수 & 소수)
//              DFS(수 * 10 + i, cnt + 1) -> 재귀
//      }
//  }

// //소수 구하는 함수
// for(i를 2 ~ 현재 수 / 2){
//     if(% i == 0) -> return false;
// }
//     return true;

int n;
int cnt; // 자릿수 판별

bool is_prime(int num) {
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}

void dfs(int num, int cnt) {
  if (cnt == n) {
    if (is_prime(num))
      cout << num << "\n";
    return;
  }

  for (int i = 1; i < 10; i++) {
    if (i % 2 == 0)
      continue;

    if (is_prime(num * 10 + i))
      dfs(num * 10 + i, cnt + 1);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> n;

  dfs(2, 1);
  dfs(3, 1);
  dfs(5, 1);
  dfs(7, 1);

  return 0;
}