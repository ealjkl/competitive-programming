import math

T = int(input())


def find_first_one(a):
    for i, x in enumerate(a[:-1]):
        if x == 1:
            return i
    return math.nan


def find_last_one(a):
    for i, x in enumerate(reversed(a)):
        if x == 1:
            return -(i + 1)
    return math.nan


def solve():
    n, k = [int(el) for el in input().split()]
    s = input()
    s = [int(el) for el in list(s)]
    total = 0
    for x in s[1:-1]:
        total += x*11

    if n == 1:
        return s[0]

    total += 10*s[0]
    total += 1*s[-1]
    first_total = total

    last_one_idx = find_last_one(s)
    nmoves1 = -(last_one_idx + 1)

    if nmoves1 is not math.nan and s[-1] == 0 and nmoves1 <= k:
        if nmoves1 == n - 1:
            total -= 9
            s[last_one_idx], s[-1] = s[-1], s[last_one_idx]
        else:
            total -= 10
            s[last_one_idx], s[-1] = s[-1], s[last_one_idx]
        k -= nmoves1

    nmoves2 = find_first_one(s)
    if nmoves2 is not math.nan and s[0] == 0 and nmoves2 <= k:
        total -= 1

    return total


for t in range(T):
    print(solve())
