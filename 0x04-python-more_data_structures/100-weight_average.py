#!/usr/bin/python3

def weight_average(my_list=[]):
    """
    Calculate the weighted average of a list of tuples.

    Args:
        my_list (list): The input list of tuple.

    Returns:
        float: The calculated weighted average.
    """
    if not my_list:
        return 0  # Return 0 if the list is empty

    num = 0
    den = 0

    for tup in my_list:
        num += tup[0] * tup[1]  # Sum of value * weight
        den += tup[1]  # Sum of weights

    return num / den  # Calculate and return the weighted average
