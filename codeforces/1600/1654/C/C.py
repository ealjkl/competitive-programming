T = int(input()) 


def possible(array): 
    if len(array) < 2:
        return True
    array = sorted(array)
    if array[1] - array[0] > 1:
        return False
    if (len(array) == 2) and (array[1] - array[0] <= 1):
        return True
    else: 
        option1 = array[2:]
        option1.insert(0, array[0] + array[1]) 
        if not possible(option1):
            min_el = array[0]
            max_el = array[-1]
            if min_el == max_el:
                return False
            for el in array:
                if (el > min_el):
                    min_el2 = el
                    break
            
            if min_el2 == min_el + 1:
                option2 = array[:]
                option2.remove(array[0] + 1)
                option2[0] *= 2
                option2[0] += 1
                if not possible(option2):
                    return False
                else:
                    return True
            else:
                return False

        else:
            return True

for t in range(T):
    n = int(input())
    a = [int(el) for el in input().split()]
    b = sorted(a)

    # if t + 1 == 5: 
    if possible(a):
        print("YES")
    else:
        print("NO")

