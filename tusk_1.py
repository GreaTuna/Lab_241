import random

s1 = int(input("array 1 size: "))
s2 = int(input("array 2 size: "))

if s1 and s2 > 0:
    arr1 = [random.randint(1, 9) for i in range(s1)]
    arr2 = [random.randint(1, 9) for i in range(s2)]
    arr3 = []
    
    print("array 1:", arr1)
    print("array 2:", arr2)
    
    rem = 0 # Остаток от деления 
    i = len(arr1) - 1
    j = len(arr2) - 1

    while i >= 0 or j >= 0 or rem > 0:
        if i >= 0 and j >= 0:
            temp_sum = arr1[i] + arr2[j] + rem
        elif i >= 0:
            temp_sum = arr1[i] + rem
        elif j >= 0:
            temp_sum = arr2[j] + rem
        else:
            temp_sum = rem

        arr3.append(temp_sum % 10)
        rem = temp_sum // 10

        i -= 1
        j -= 1
        
    print(f"result: {arr3[::-1]}")
else:
    print("length must be greater than zero")

