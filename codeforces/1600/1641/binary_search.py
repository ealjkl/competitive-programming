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