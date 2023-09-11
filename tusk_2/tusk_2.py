from operations import*
from auxiliary_functions import*

s1 = int(input("array 1 size: "))
s2 = int(input("array 2 size: "))

if s1 and s2 > 0: 

    operation = str(input("enter + or - : "))

    arr1 = []
    arr2 = []
    arr3 = []

    arr1 = fill_array(arr1, s1)
    arr2 = fill_array(arr2, s2)

    print_arrays(arr1, arr2)

    match(operation):
        case "+":   
            arr3 = addition(arr1, arr2, arr3)
            print(f"arrey 3: {arr3}")
        case "-":
            num1 = convert_to_number(arr1)
            num2 = convert_to_number(arr2)

            if num1 - num2 >= 0:
                arr3 = subtraction_from_bigger(arr1, arr2, arr3)
                print(f"arrey 3: {arr3}")
            else:
                arr3 = subtraction_from_smaller(arr1, arr2, arr3)
                print(f"arrey 3: {arr3}")
        case default:
            print("enter + or -")
else:
    print("length must be greater than zero")