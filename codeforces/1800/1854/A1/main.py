from typing import List


def count_signs(n: int, arr: List[int]):
    pos = 0
    neg = 0
    zer = 0
    for el in arr:
        if el > 0:
            pos += 1
        elif el < 0:
            neg += 1
        else:
            zer += 1

    return pos, neg, zer


def find_neg(n: int, arr: List[int]):
    for i, el in enumerate(arr):
        if el < 0:
            return i
    return -1


def find_pos(n: int, arr: List[int]):
    for i, el in enumerate(arr):
        if el > 0:
            return i
    return -1


def move(i: int, j: int):
    print(f"{i + 1} {j + 1}")


def solve_for_all_non_negative(n: int, arr: List[int]):
    for i in range(n - 1):
        move(i + 1, i)


def solve_for_all_non_positive(n: int, arr: List[int]):
    for i in range(n - 1, 0, -1):
        move(i - 1, i)
    return None


def test(n: int, arr: List[int]):
    pos, neg, zer = count_signs(n, arr)
    if zer == n:
        print(0)
        return
    if (pos == 0):
        print(n - 1)
        solve_for_all_non_positive(n, arr)
        return
    if (neg == 0):
        print(n - 1)
        solve_for_all_non_negative(n, arr)
        return

    if pos >= neg:
        print(6 + neg + n - 1)
        pos_idx = find_pos(n, arr)
        for i in range(6):
            move(pos_idx, pos_idx)
        for i, el in enumerate(arr):
            if el < 0:
                move(i, pos_idx)
        solve_for_all_non_negative(n, arr)
    else:
        print(6 + pos + n - 1)
        neg_idx = find_neg(n, arr)
        for i in range(6):
            move(neg_idx, neg_idx)
        for i, el in enumerate(arr):
            if el > 0:
                move(i, neg_idx)
        solve_for_all_non_positive(n, arr)

    return


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(el) for el in input().split()]
        test(n, arr)


main()
