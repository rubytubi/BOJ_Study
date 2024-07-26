#include <iostream>

using namespace std;

int cnt;
int arr[50];

// recursion
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;

    else
        return (fib(n - 1) + fib(n - 2));
}

// dp
int fibonacci(int n)
{
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        cnt++;
    }
    return arr[n];
}

int main()
{
    int n;
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << fib(n) << " " << cnt << "\n";

    return 0;
}