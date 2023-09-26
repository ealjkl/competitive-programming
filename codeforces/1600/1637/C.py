t = int(input())
for i in range(t):
    n = int(input())
    a = [int(el) for el in input().split()]

    if max(a[1:-1]) == 1:
        print(-1)
    else:
        if (n == 3) and (a[1]%2 == 1): 
            print(-1)
        else:
            I = sum(map(lambda el: el%2, a[1:-1]))
            S = sum(a[1:-1])
            print(I + (S - I)//2)
