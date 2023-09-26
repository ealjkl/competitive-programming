from collections import Counter, defaultdict

# reading input
n, m = [int(el) for el in input().split()]

def manhatan_distance(a, b):
    return abs(a[0] - b[0]) + abs(a[1] - b[1])

def compute_manhatan_for_all_table(table, r, c):
    sum_this_number = 0
    this_number = table[r][c]
    for i in range(n):
        for j in range(m):
            if this_number == table[i][j]:   
                sum_this_number += manhatan_distance((r, c), (i, j)) 
    return sum_this_number

table = []
for r in range(n): 
    table.append([int(el) for el in input().split()])

manhatan_distances_dict = defaultdict(int) 
for r in range(n):
    for c in range(m):
        this_number = table[r][c]
        manhatan_distances_dict[this_number] += compute_manhatan_for_all_table(table, r, c)

print(sum(manhatan_distances_dict.values())//2)
    