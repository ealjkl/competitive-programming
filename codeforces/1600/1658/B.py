def factorial(n):
    if n == 0:
        return 1
    return factorial(n -  1)*n

T = int(input())

for t in range(T):
    n = int(input())
    if n % 2 == 1:
        print(0)
        continue

    out = factorial(n//2)**2 % 998244353

    print(out)

