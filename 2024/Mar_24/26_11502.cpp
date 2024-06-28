#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> prime;

bool is_prime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void find_prime(int num) {
  for (int i = 2; i <= num; i++) {
    if (is_prime(i))
      prime.push_back(i);
  }
}

bool three_prime(int n) {
  for (int i = 0; i < prime.size(); i++) {
    for (int j = 0; j < prime.size(); j++) {
      for (int k = 0; k < prime.size(); k++) {
        if (prime[i] + prime[j] + prime[k] == n) {
          cout << prime[i] << " " << prime[j] << " " << prime[k] << "\n";
          return true;
        }
      }
    }
  }
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  find_prime(1000);

  while (t--) {
    int n;
    cin >> n;

    if (!three_prime(n)) {
      cout << "0\n";
    }
  }

  return 0;
}
