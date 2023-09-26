from typing import List, Tuple
import heapq

ArrayDesc = Tuple[int, List[int]]


def find_two_min(arr: List[int]):
    smallest, second_smallest = heapq.nsmallest(2, arr)
    return smallest, second_smallest


def test(n_arrays: int, arrays_desc: List[ArrayDesc]):
    smalls = []
    second_smalls = []
    for [m, arr] in arrays_desc:
        smallest, second_smallest = find_two_min(arr)
        smalls.append(smallest)
        second_smalls.append(second_smallest)
    min_second_small = min(second_smalls)
    return sum(second_smalls) - min_second_small + min(smalls)


def main():
    t = int(input())
    for _i in range(t):
        n = int(input())
        arrays_desc = []
        for _j in range(n):
            m = int(input())
            arr = [int(el) for el in input().split()]
            arr_desc = (m, arr)
            arrays_desc.append(arr_desc)
        ans = test(n_arrays=n, arrays_desc=arrays_desc)
        print(ans)


main()
