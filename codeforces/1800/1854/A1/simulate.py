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


def move(i: int, j: int, arr: List[int]):
    arr[i] = arr[i] + arr[j]
    # print(f"{i} {j}")


def solve_for_all_non_negative(n: int, arr: List[int]):
    moves = 0
    for i in range(n - 1):
        move(i + 1, i, arr)
        moves += 1
    return moves


def solve_for_all_non_positive(n: int, arr: List[int]):
    moves = 0
    for i in range(n - 1, 0, -1):
        move(i - 1, i, arr)
        moves += 1
    return moves


def test(n: int, arr: List[int]):
    pos, neg, zer = count_signs(n, arr)
    if zer == n:
        print(0)
        return
    if (pos == 0):
        print("should", n - 1)
        m = solve_for_all_non_positive(n, arr)
        print("are", m)
        return
    if (neg == 0):
        print("should", n - 1)
        m = solve_for_all_non_negative(n, arr)
        print("are", m)
        return

    if pos >= neg:
        moves = 0
        print("should", 6 + neg + n - 1)
        pos_idx = find_pos(n, arr)
        for i in range(6):
            move(pos_idx, pos_idx, arr)
            moves += 1
        for i, el in enumerate(arr):
            if el < 0:
                move(i, pos_idx, arr)
                moves += 1
        m = solve_for_all_non_negative(n, arr)
        moves += m
        print("are", moves)
    else:
        moves = 0
        print("should", 6 + pos + n - 1)
        neg_idx = find_neg(n, arr)
        for i in range(6):
            move(neg_idx, neg_idx, arr)
            moves += 1
        for i, el in enumerate(arr):
            if el > 0:
                move(i, neg_idx, arr)
                moves += 1
        m = solve_for_all_non_positive(n, arr)
        moves += m
        print("are", moves)

    return


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(el) for el in input().split()]
        # orig = arr[:]
        test(n, arr)
        # print("original arr", orig)
        # print("arr", arr)
        # print("fullfills", arr == sorted(arr))
        print()


main()
