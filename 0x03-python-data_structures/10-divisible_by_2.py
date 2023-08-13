#!/usr/bin/python3
# 10-divisible_by_2.py

def divisible_by_2(my_list=[]):
    """
    Find all elements in the list that are divisible by 2.

    :param my_list: The input list of integers.
    :return: A list of boolean values indicating if each element is divisible by 2.
    """
    # Initialize an empty list to store the results (True or False for each element)
    multiples = []

    # Iterate through the input list
    for i in range(len(my_list)):
        # Check if the current element is divisible by 2
        if my_list[i] % 2 == 0:
            # If divisible by 2, append True to the multiples list
            multiples.append(True)
        else:
            # If not divisible by 2, append False to the multiples list
            multiples.append(False)

    # Return the list of boolean values indicating divisibility by 2
    return multiples

