T = int(input()) 

def max_sub_sum(a):
    start_idx = 0
    end_idx = 0

    max_until_i = 0
    max_sum = 0
    
    for i in range(n):
        if max_until_i + a[i] > a[i]:
            max_until_i = max_until_i + a[i]
        else:
            possible_start_idx = i
            max_until_i = a[i]

        if max_until_i > max_sum:
            max_sum = max_until_i
            start_idx = possible_start_idx
            end_idx = i
    return max_sum, start_idx, end_idx

for i in range(T):
    n, x = [int(el) for el in input().split()]
    a = [int(el) for el in input().split()]


    # print(max_sum, start_idx, end_idx)
    max_sum, start_idx, end_idx = max_sub_sum(a) 
    for k in range(n):
        #find the direction to extend the sum
        #first check left
        #TODO 
        pass