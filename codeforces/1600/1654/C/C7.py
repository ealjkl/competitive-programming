T = int(input())
from collections import Counter
from math import floor, ceil
from bisect import insort, bisect_left

for t in range(T):
    n = int(input())
    a = [int(el) for el in input().split()]
    a = Counter(a)
    a_sorted_keys = sorted(a.keys())
    b = [sum(a)]

    max_iter = 10000 
    failed = False
    while(not(len(b) == 0 or len(a) == 0)):
        a_max_el = a_sorted_keys[-1]
        b_max_el = b[-1]
        if b_max_el > a_max_el:
            failed = True
            print("NO")
            break
        b.pop(-1)
        if a[b_max_el] < 1:
            insort(b, floor(b_max_el/2))
            insort(b, ceil(b_max_el/2))
        else:
            a[b_max_el] -= 1
            if a[b_max_el] == 0: 
                del a[b_max_el]
                a_sorted_keys.pop(-1)

        max_iter -= 1
        if max_iter < 1:
            print("max_iter reached")
            break
    
    # print(failed, max_iter)
    if not failed and (len(b) == 0) and (len(a) == 0):
        print("YES")
    else:
        print("second NO")




