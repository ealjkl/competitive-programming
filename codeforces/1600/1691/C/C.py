
import math
T = int(input())


def find_first_zero(a):
    for i, x in enumerate(a):
        if x == 0:
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
    total += 10*s[0]
    total += 1*s[-1]
    first_total = total

    nmoves1 = -(find_last_one(s) + 1)

    if nmoves1 is not math.nan and s[-1] == 0 and nmoves1 <= k:
        total -= 10
        k -= nmoves1

    nmoves2 = find_first_zero(s)
    if nmoves2 is not math.nan and s[0] == 1 and nmoves2 <= k:
        total -= 1

    return total, first_total


for t in range(T):
    print(solve())
