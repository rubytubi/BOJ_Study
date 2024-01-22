def factorial(n):
    ret = 1
    for i in range(2, n + 1):
        ret *= i
    return ret

n, m = map(int, input().split())
print(factorial(n) // (factorial(m) * factorial(n - m)))

