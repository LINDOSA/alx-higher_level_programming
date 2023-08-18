#!/usr/bin/python3

def multiply_list_map(my_list=[], number=0):
    """
    Multiply each element of a list by a specified number using map.

    Args:
        my_list (list): The input list.
        number (int): The number to multiply each element by.

    Returns:
        list: A new list with elements multiplied by the specified number.
    """
    multiplied_list = list(map(lambda i: i * number, my_list))  # Use map to perform multiplication
    return multiplied_list  # Return the new list with multiplied elements

