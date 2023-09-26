from collections import Counter, defaultdict

def manhatan_distance(a, b):
    return abs(a[0] - b[0]) + abs(a[1] - b[1])

# reading input
n, m = [int(el) for el in input().split()]

table = []

for r in range(n): 
    table.append([int(el) for el in input().split()])

colors_cell_dict = defaultdict(list) 
for r in range(n):
    for c in range(m):
        color = table[r][c]
        colors_cell_dict[color].append((r, c))


total_sum = 0
for color, color_coordinates in colors_cell_dict.items():
    for r, c in color_coordinates:
        for i, j in color_coordinates:
            total_sum += manhatan_distance((r, c), (i, j))

print(total_sum//2)
    