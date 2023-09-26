def test(n: int):
    perm = []
    for curr_odd in range(1, n + 1, 2):
        curr = curr_odd
        while (curr <= n):
            perm.append(curr)
            curr *= 2
    for p in perm:
        print(p, end=" ")
    print()


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        test(n)


main()
