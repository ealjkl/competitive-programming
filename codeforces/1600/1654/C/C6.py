from bisect import insort, bisect_left

T = int(input()) 

def binary_search(a, x):
    'Locate the leftmost value exactly equal to x'
    i = bisect_left(a, x)
    if i != len(a) and a[i] == x:
        return i
    return -1

def possible(a: list, m):
    # a is sorted
    # print(a)
    if m < 2:
        return True
    if a[1] - a[0] > 1: 
        return False
    
    min_el = a[0]

    if min_el == a[1]:
        option1 = a
        x = option1.pop(1)
        y = option1.pop(0)

        new_el =  min_el*2
        new_index = bisect_left(option1, new_el)
        option1.insert(new_index, new_el)

        if possible(option1, m - 1):
            return True
        
        option1.pop(new_index)
        option1.insert(0, x)
        option1.insert(1, y)

    pos_min2 = binary_search(a, min_el + 1)

    if pos_min2 > -1:
        option2 = a
        x = option2.pop(pos_min2)
        y = option2.pop(0)

        new_el = min_el*2 + 1
        new_index = bisect_left(option2, new_el)
        option2.insert(new_index, new_el)

        if possible(option2, m -1):
            return True

        option2.pop(new_index)
        option2.insert(0, min_el)
        option2.insert(pos_min2, min_el + 1)
    
    return False
    
for t in range(T):
    n = int(input())
    a = [int(el) for el in input().split()]
    b = sorted(a)

    if t + 1 == 5 or True: 
        if possible(b, n):
            print("YES")
        else:
            print("NO")