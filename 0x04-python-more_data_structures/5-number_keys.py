#!/usr/bin/python3

def number_keys(a_dictionary):
    """
    Count the number of keys in a dictionary.

    Args:
        a_dictionary (dict): The input dictionary.

    Returns:
        int: The number of keys in the dictionary.
    """
    num = 0  # Initialize a counter for the keys
    list_keys = list(a_dictionary.keys())  # Get the keys as a list

    for i in list_keys:
        num += 1  # Increment the counter for each key

    return num
