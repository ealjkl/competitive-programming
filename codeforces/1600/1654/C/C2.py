from collections import Counter
import bisect 


T = int(input()) 

def possible(counter: Counter, sorted_keys: list, m): 
    if m < 2:
        return True
    min0 = sorted_keys[0]
    repeated_min0 = counter[min0] > 1
    el0 = min0
    if not repeated_min0:
        min1 = sorted_keys[1]
    el1 = min0 if repeated_min0 else min1
    idx1 = 0 if repeated_min0 else 1
    if el1 - el0 > 1:
        return False
    if (m == 2) and (el1 - el0 <= 1):
        return True
    else: 
        counter1 = counter.copy()
        sorted_keys1 = sorted_keys.copy()
        counter1[el1] -= 1

        if counter1[el1] == 0:
            del counter1[el1]
            sorted_keys1.pop(idx1)

        counter1[el0] -= 1 

        if counter1[el0] == 0:
            del counter1[el0]
            sorted_keys1.pop(0)
        
        counter1[el0 + el1] += 1
        bisect.insort(sorted_keys1, el0 + el1)

        if not possible(counter1, sorted_keys1, m - 1):
            max0 = sorted_keys[-1]
            if min0 == max0:
                return False
            
            if min1 == min0 + 1:
                counter2 = counter.copy()
                sorted_keys2 = sorted_keys.copy()
                counter2[min1] -= 1

                if counter1[min1] == 0: 
                    del counter2[min1]
                    sorted_keys2.pop(1)

                counter2[min0] -= 1
                
                if counter2[min0] == 0:
                    del counter2[min0]
                    sorted_keys2.pop(0)

                counter[min1 + min0] += 1
                bisect.insort(sorted_keys2, min1 + min0)
                if not possible(counter2, sorted_keys2, m - 1):
                    return False
                else:
                    return True
            else:
                return False

        else:
            return True

for t in range(T):
    n = int(input())
    a = [int(el) for el in input().split()]
    counter = Counter(a)
    sorted_keys = sorted(counter.keys())
    m = len(a)

    if possible(counter, sorted_keys, m):
        print("YES")
    else:
        print("NO")

