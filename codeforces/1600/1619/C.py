# T = int(input()) 
T = 1

for t in range(T):
    #read and convert
    a, s = [list(inp) for inp in input().split()]
    a = list(map(lambda el: int(el), a))
    s = list(map(lambda el: int(el), s))
    b = []

    ans = 0
    for i in range(len(a) - 1, -1, -1):
        if len(s) == 0: 
            ans = -1 
            break
        substraction = s[-1] - a[i]
        digit = substraction % 10
        s.pop(-1)
        if substraction < 0:
            if len(s) == 0:
                ans = -1
                break
            if s[-1] == 1:
                s.pop(-1)
            else:
                ans = -1
                break
        b.insert(0, str(digit))
    
    if ans != -1:
        print("".join(b))
    else:
        print(ans)
    
