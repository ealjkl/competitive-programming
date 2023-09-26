def is_sorted(a: list):
    sorted_flag = True 
    for i in range(1, len(a)):
        if a[i] < a[i - 1]: 
            sorted_flag = False
            break
    return sorted_flag

for t in range(int(input())): 
    n = int(input())
    a = [int(el) for el in input().split()]

    if is_sorted(a):
        print(0)
        continue

    if a[-1] < a[-2]:
        print(-1)
        continue

    if a[-2] - a[-1] <= a[-2]:
        print(n - 2)
        for i in range(n - 2):
            print(i + 1, n - 1, n)
    else:
        print(-1)