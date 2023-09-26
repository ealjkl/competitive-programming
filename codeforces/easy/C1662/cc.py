import bisect
n, k = [int(x) for  x in input().split()]
a = [int(x) for  x in input().split()]

s = sum(a)
d = s - k

def ok(h, t):
    val = t + h*n
    return val >= d 

def find_h(t):
    L, R = 0, d
    while(L <= R):
        M = L + (R - L)//2 
        if ok(M, t):
            h = M
            R = M - 1
        else:
            L = M + 1
    return h
        

if d <=0: 
    print(0)
else: 
    aso = sorted(a)
    #difference
    t = sum(map(lambda el: el - aso[0], aso))

    print()
    print("ALGORITHM STARTED")
    print("a", a)
    print("aso", aso)
    print("d", d)
    print("t", t)
    h = find_h(t)
    print("h", h)
    current_steps = h
    aso[0] -= h
    current_sum = h
    print("LOOP STARTED")
    for i in range(len(aso) - 1, -1, -1):
        print("i", i)
        added_term = (aso[i] - aso[0])
        print(f"aso step {current_steps}", aso)

        print("current_sum", current_sum)
        print("added_term", added_term)
        current_sum += added_term 
        current_steps += 1
        if current_sum >= d:
            break

    print("current_steps", current_steps)
    