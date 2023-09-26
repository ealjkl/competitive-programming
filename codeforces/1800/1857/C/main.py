from typing import List

# 3221110000
# 4


def test(n: int, arr: List[int]):
    arr.sort(reverse=True)
    ans = [arr[0]]
    idx = 0
    curr = 0
    while (idx < len(arr)):
        ans.append(arr[idx])
        curr += 1
        idx = idx + curr
    for el in ans:
        print(el, end=" ")
    print()


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(el) for el in input().split()]
        test(n, arr)
    return None


main()
