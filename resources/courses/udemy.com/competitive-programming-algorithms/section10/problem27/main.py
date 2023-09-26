mod = int(1e9 + 7)


def powr(a, n, m):
    res = 1
    while n:
        if n & 1:
            res = (res*a) % m
        a = (a*a) % m
        n = (n >> 1)
    return res
