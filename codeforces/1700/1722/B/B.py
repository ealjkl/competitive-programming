T = int(input())


def solve():
    n = int(input())
    r1 = input()
    r2 = input()
    r1 = r1.replace("B", "G")
    r2 = r2.replace("B", "G")
    return r1 == r2


for t in range(T):
    if solve():
        print("YES")
    else:
        print("NO")
