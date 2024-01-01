#include <iostream>
#include <vector>
// 순열 구하기.

using namespace std;

vector<int> res;
int visited[10]; // 방문 여부를 저장하는 배열
int n;

void print() { // 출력 함수
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  cout << "\n";
}

void dfs(int d) { // d개의 수를 이용해 순열을 만든다
  if (d == n) {
    print();
    return;
  }
  for (int i = 1; i <= n; i++) {
    if (visited[i]) // 이미 사용한 숫자라면 다음으로 넘긴다.
      continue;

    // 백트래킹 사용
    visited[i] = 1;   // 방문했다는 표시 남기기
    res.push_back(i); // res벡터에 현재 값을 넣어준다.

    dfs(d + 1); // DFS를 사용해 한 칸 더 내려감(깊어짐)

    res.pop_back(); // Back Tracking
    visited[i] = 0; // i 에서 빠져나왔기 때문에 visit[i]를 0(false)로 바꿔줌
  }
}

int main() {
  cin >> n;
  dfs(0);

  return 0;
}

/*
조합 구하기 <- 차이점은 print부분과 res벡터를 사용하지 않는다는 점
#include <iostream>
#include <vector>

using namespace std;

int visited[n]  //방문 여부를 저장하는 배열

void print(){
  for(int i = 1; i <= n; i++){
    if(visited[i])          //조합과 순열의 차이 (조합은 중복 제거)
    cout << i << " ";
  }
  cout << endl;
}

void dfs(int index, int d){       //d개의 수를 이용해 순열을 만든다
  if(d == n){
    print()
    return ;
  }

  for(int i = index; i <= n; i++){
    if(visited[i])          //이미 방문한 곳이라면 건너뛴다
      continue;

    visited[i] = 1;       //방문 표시를 남긴다.
    dfs(i, d + 1);
    visited[i] = 0        //초기화(다른 요소 방문여부 체크하기 위해)
  }
}

int main(){
  dfs(1, 0);

  return 0;
}
*/