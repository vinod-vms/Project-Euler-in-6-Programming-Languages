def multiples_of_3_and_5(number):
# Written by
# Vinod Mathew Sebastian
    sum = 0
    if number < 1:
        return "Sorry. Enter a positive integer"
    else:
        for i in range(number):
            if i%3 == 0 or i%5 == 0:
                sum = sum+ i
    return sum
    
    

print(multiples_of_3_and_5(1000))