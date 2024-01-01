t = int(input())

for _ in range(t):
    q = input()
    n = int(input())
    arr = [int(input()) for i in range(n)]
    print("YES" if sum(arr) % n == 0 else "NO")