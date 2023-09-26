T = int(input()) 

for t in range(T):
    #read and convert
    a, s = [list(inp) for inp in input().split()]
    a = list(map(lambda el: int(el), a))
    s = list(map(lambda el: int(el), s))
    b = []
    ans = 0

    while (len(s) > 0) and (len(a) > 0):
        subs = s[-1] - a[-1]
        digit = subs % 10

        s.pop(-1)
        a.pop(-1)
        b.insert(0, str(digit))

        if subs < 0:
            # revisamos el penúltimo elemento, pero tenemos que verificar que en efecto haya penúltimo elemento
            if len(s) == 0:
                ans = -1
                break
            else:
                if s[-1] == 1:
                    s.pop(-1)
                else:
                    ans = -1
                    break

    if (len(a) > 0):
        ans = -1
    else:
        for el in s[::-1]:
            b.insert(0, str(el))
        
    if ans == 0:
        print("".join(b).lstrip("0"))
    else:
        print(ans)
    
    