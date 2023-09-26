T = int(input()) 
from collections import Counter
from bisect import insort, bisect_left

sorted_keys = []

def possible(a: Counter, m, min_idx):
    # a is sorted
    # print(a)
    if m < 2:
        return True
    min_el = sorted_keys[min_idx]
    if a[min_el] < 2 and a[min_el + 1] < 1: 
        return False

    if a[min_el] > 1:
        option1 = a.copy()
        option1[min_el] -= 2
        if option1[min_el] == 0:
            new_min_idx = min_idx + 1
        else:
            new_min_idx = min_idx
        
        new_el = min_el*2
        option1[new_el] += 1 
        added_sum = new_el not in option1

        if added_sum: 
            pos_new_index = bisect_left(sorted_keys, new_el) 
            sorted_keys.insert(pos_new_index, new_el)
        
        if possible(option1, m - 1, new_min_idx):
            return True

        if added_sum:
            sorted_keys.pop(pos_new_index)

    if a[min_el + 1] > 0:
        option2 = a.copy()
        option2[min_el + 1] -= 1
        option2[min_el] -= 1

        if option2[min_el] == 0:
            new_min_idx = min_idx + 1
        else:
            new_min_idx = min_idx

        new_el = min_el*2 + 1
        option2[new_el] += 1

        added_sum = new_el not in option2

        if added_sum:
            pos_new_index = bisect_left(sorted_keys, new_el)
            sorted_keys.insert(pos_new_index, new_el)

        if possible(option2, m -1, new_min_idx):
            return True

        if added_sum:
            sorted_keys.pop(pos_new_index)
    
    return False
    
        
        


for t in range(T):
    n = int(input())
    a = [int(el) for el in input().split()]
    a = Counter(a)
    sorted_keys = sorted(a.keys())

    if t + 1 == 5 or True: 
        if possible(a, n, 0):
            print("YES")
        else:
            print("NO")