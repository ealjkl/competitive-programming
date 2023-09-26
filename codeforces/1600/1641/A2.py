def binary_search(a:list, x):
    L = 0
    R = len(a)
    while L<= R:
        M = L + (R - L)//2
        print("M", M)
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

    counter = 0

    while len(b) > 0:
        if len(b) == 1:
            counter += 1
            break

        p = b[0]
        b.pop(0)
        j = binary_search(b, p*x) 
        if (j != -1):
            b.pop(j)
        else:
            counter += 1

    print(counter)