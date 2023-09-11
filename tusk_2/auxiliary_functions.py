import random

def fill_array(arr, size):

    arr = [random.randint(0, 9) for i in range(size)]

    if arr[0] == 0: arr[0] = random.randint(1, 9)

    return arr


def print_arrays(arr1, arr2):

    print(f"arrey 1: {arr1}")
    print(f"arrey 2: {arr2}")


def convert_to_number(arr):

    number = 0

    for i in arr:

        number = (number * 10) + i

    return number

