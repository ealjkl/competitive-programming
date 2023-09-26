# T = int(input()) 
T = 1


for t in range(T):
    l, r = [int(el) for el in input().split()]
    a = [int(el) for el in input().split()]

    n = r - l + 1

    for x in range(l, r + 2):
        b = list(map(lambda el: el ^ x, list(range(l, r + 1))))
        if  sorted(b) == sorted(a): 
            print(x)
            break
        print(sorted(b))


