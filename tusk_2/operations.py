def addition(arr1, arr2, arr3):

    rem = 0 
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

    return arr3[::-1]


def subtraction_from_bigger(arr1, arr2, arr3):

    borr = 0
    i = len(arr1) - 1
    j = len(arr2) - 1

    while i >= 0 or j >= 0 :
        if i >= 0 and j >= 0:
            diff = arr1[i] - arr2[j] - borr
        elif i >= 0:
            diff = arr1[i] - borr
        elif j >= 0:
            diff = arr2[j] - borr     

        if diff < 0:
            diff += 10
            borr = 1
        else:
            borr = 0
        
        arr3.append(diff)
        
        i -= 1
        j -= 1
    
    return arr3[::-1]


def subtraction_from_smaller(arr1, arr2, arr3):

    arr1, arr2 = arr2, arr1

    borr = 0
    i = len(arr1) - 1
    j = len(arr2) - 1

    while i >= 0 or j >= 0 :
        if i >= 0 and j >= 0:
            diff = arr1[i] - arr2[j] - borr
        elif i >= 0:
            diff = arr1[i] - borr
        elif j >= 0:
            diff = arr2[j] - borr     

        if diff < 0:
            diff += 10
            borr = 1
        else:
            borr = 0
        
        arr3.append(diff)
        
        i -= 1
        j -= 1
    
    arr3.append('-')
    return arr3[::-1]
