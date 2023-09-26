from collections import defaultdict

n, m = [int(el) for el in input().split()]

table = []

for r in range(n): 
    table.append([int(el) for el in input().split()])

col_lists = defaultdict(list) 
row_lists = defaultdict(list) 

for r in range(n):
    for c in range(m):
        color = table[r][c]
        col_lists[color].append(r)

for c in range(m):
    for r in range(n):
        color = table[r][c]
        row_lists[color].append(c)

total_sum = 0 
for color, points in col_lists.items():
    for i, p in enumerate(points):
        total_sum += (2*i + 1 - len(points))*p

for color, points in row_lists.items():
    for i, p in enumerate(points):
        total_sum += (2*i + 1 - len(points))*p

print(total_sum)
