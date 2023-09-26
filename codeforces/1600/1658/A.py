from itertools import count


T = int(input()) 

for t in range(T):
    n = int(input())
    s = input()
    if n == 1:
        print(0)
        continue
    
    if n == 2:
        if s == "00":
            print(2)
        else:
            print(0)
        continue

    count = 0
    for i in range(n - 2):
        if (s[i] == "0"): 
            if s[i + 1] == "0":
                count += 2
            elif (s[i + 1] == "1") and (s[i + 2] == "0"):
                count += 1
    if s[-2:] == "00":
        count += 2 
    # if s[-2:] == "01":
    #     count += 0
    # if s[-2:] == "10":
    #     count += 0
    # if s[-2:] == "11":
    #     count += 0

        

    print(count)
    