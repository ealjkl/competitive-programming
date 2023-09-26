from collections import Counter

for t in range(int(input())):
    n, x = [int(el) for el in input().split()]
    b = [int(el) for el in input().split()]

    counter = Counter(b)

    ans = 0
    for c in sorted(counter):    
        while counter[c] > 0:
            if counter[c*x] > 0:  
                counter[c*x] -= 1
            else: 
                ans += 1
            counter[c] -= 1
    print(ans)
        
            
            
            
            

