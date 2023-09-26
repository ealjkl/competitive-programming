from collections import Counter
T = int(input())

for t in range(T):
    n, k = [int(el) for el in input().split()] 
    s = input().strip()

    counter = Counter(s)
    n_pairs = 0 
    total_letters = 0
    for key, values in counter.items():
        n_pairs += values//2 
        total_letters += values

    distribution = (n_pairs//k)*2
    letters_left = total_letters - distribution*k
    min_length = distribution + bool(letters_left//k) 
    print(min_length)