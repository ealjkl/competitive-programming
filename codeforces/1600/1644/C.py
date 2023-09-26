T = int(input()) 
for i in range(T):
    n, x = [int(el) for el in input().split()]
    a = [int(el) for el in input().split()]

    start_idx = 0
    end_idx = 0

    max_until_k = 0
    max_sum = 0
    
    for i in range(n):
        if max_until_k + a[i] > a[i]:
            max_until_k = max_until_k + a[i]
        else:
            possible_start_idx = i
            max_until_k = a[i]

        if max_until_k > max_sum:
            max_sum = max_until_k
            start_idx = possible_start_idx
            end_idx = i

    # print(max_sum, start_idx, end_idx)
    for k in range(n):
        #find the direction to extend the sum
        #first check left
        start_idx - 1


        