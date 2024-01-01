#include <iostream>

using namespace std;

int main() {
	int m, n;
	int sum = 0, min = -1;
	int count = 0;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		for (int div = 1; div <= i; div++) {
			if (i%div == 0)
				count++;
		}
		if (count == 2) {		  //i가 소수
			if (min == -1)		    //최솟값 X
				min = i;
			sum += i;
		}
		count = 0;
	}
	if (min == -1)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << min << '\n';

        return 0;
}