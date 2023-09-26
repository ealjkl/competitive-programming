def expand(num, m):
    times = 1
    while num % m == 0:
        times *= m
        num //= m

    return num, times


def solve():
    n, m = [int(x) for x in input().split()]

    a = [int(x) for x in input().split()]

    k = int(input())
    b = [int(x) for x in input().split()]

    i, j = 0, 0
    a_num = a_times = b_num = b_times = 0

    while(i < n and j < k):
        # print("-"*70)
        # print("a, num, times; before: ", a, a_num, a_times)
        if a_times == 0:
            a_num, a_times = expand(a[i], m)
        # print("a, num, times; after: ", a, a_num, a_times)

        # print("b, num, times; before: ", b, b_num, b_times)
        if b_times == 0:
            b_num, b_times = expand(b[j], m)
        # print("b, num, times; after: ", b, b_num, b_times)

        if b_num != a_num:
            # print(a, a_num, a_times)
            print("NO")
            return

        mi = min(a_times, b_times)
        a_times -= mi
        b_times -= mi
        if a_times == 0:
            i += 1
        if b_times == 0:
            j += 1
    if i != len(a) or j != len(b):
        print("NO")
    else:
        print("YES")


t = int(input())

for _ in range(t):
    solve()
