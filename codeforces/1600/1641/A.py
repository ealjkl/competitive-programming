def binary_search(a:list, x):
    L = 0
    R = len(a)
    while L<= R:
        M = L + (R - L)//2
        if x == a[M]: 
            return M
        if x > a[M]:
            L = M + 1
        else:
            R = M - 1

    return -1 


for t in range(int(input())):
    n, x = [int(el) for el in input().split()]
    b = [int(el) for el in input().split()]
    b.sort()

    i = 0
    counter = 0

    while len(b) > 0:
        p = b[0]
        found = False
        for j in range(len(b)):
            q = b[j]
            if (p*x == q) and (j != 0): 
                b.pop(j)
                b.pop(0)
                i -= 1
                found = True
                break
        if not found:
            b.pop(0)
            counter += 1 

    print(counter)