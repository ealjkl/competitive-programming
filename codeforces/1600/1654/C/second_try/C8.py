from math import ceil, floor
from bisect import insort, bisect_left

T = int(input())

for t in range(T):
    n = int(input())
    a = [int(el) for el in input().split()]
    a = sorted(a)

    if len(a) < 2:
        print("YES")
        continue

    b = [sum(a)]

    safe = 100 
    iter = 0
    while (len(a) > 0 and len(b) > 0):
        if a[-1] > b[-1]:
            print("NO")
            break

        if b[-1] == a[-1]:
            b.pop(-1)
            a.pop(-1)
        else:
            el_over_two = b.pop(-1)/2
            b_new1, b_new2 = floor(el_over_two), ceil(el_over_two)
            idx1 = bisect_left(b, b_new1)
            b.insert(idx1, b_new1)
            insort(b, b_new2, lo=idx1)

    if (len(a) == 0):
        print("YES")

        iter += 1
        safe -= 1
        if safe <= 0:
            break




