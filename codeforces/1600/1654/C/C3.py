from collections import Counter
from copy import deepcopy
import bisect 

from bisect import insort
class SortedCounter(Counter):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.sorted_elements = sorted(self.elements())
        self.sorted_keys = sorted(self.keys())

    def add(self, key):
        self[key] += 1
        insort(self.sorted_elements, key)
        if key not in self:
            insort(self.sorted_keys, key)

    def remove(self, key, manual=False):
        self[key] -= 1
        if self[key] == 0:
            del self[key]
            if not manual:
                self.sorted_keys.remove(key)
        
        if not manual:
            self.sorted_elements.remove(key)
    
    def min(self):
        return self.sorted_keys[0]
    
    def max(self):
        return self.sorted_keys[-1]

    def second(self):
        if self.min() == self.max():
            return None
        else:
            return self.sorted_keys[1]


T = int(input()) 

def possible(counter: SortedCounter, m): 
    if m < 2:
        return True
    
    el1 = counter.sorted_elements[1]
    el0 = counter.sorted_elements[0]
    if el1 - el0 > 1:
        return False
    if (m == 2) and (el1 - el0 <= 1):
        return True
    else: 
        counter1 = counter.copy()
        counter1.remove(el0)
        counter1.remove(el1)
        counter1.add(el0 + el1)
        
        if not possible(counter1, m - 1):
            if counter.min() == counter.max():
                return False
            
            min0 = counter.min() 
            min1 = counter.second()

            if min1 == min0 + 1:
                counter2 = counter.copy()
                counter2.remove(min0)
                counter2.remove(min1)
                counter2.add(min0 + min1)

                if not possible(counter2, m - 1):
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
    counter = SortedCounter(a)
    m = len(a)

    if possible(counter, m):
        print("YES")
    else:
        print("NO")

