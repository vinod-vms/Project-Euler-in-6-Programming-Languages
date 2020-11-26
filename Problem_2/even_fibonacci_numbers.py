def even_fibonacci_numbers(num):
    #Written by
    #Vinod Mathew Sebastian
    sum = 0
    a = 1
    b = 2
    temp = a + b
    l = [1,2]

    for x in range(num):
        l.append(temp)
        a = b
        b = temp
        temp = a + b
        if temp > num:
            break
    for d in l:
        if d % 2 == 0:
            sum += d
    return sum



