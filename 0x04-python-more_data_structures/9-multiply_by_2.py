#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    """
    Multiply the values in a dictionary by 2.

    Args:
        a_dictionary (dict): The input dictionary.

    Returns:
        dict: A new dictionary with values multiplied by 2.
    """
    new_dir = a_dictionary.copy()  # Create a copy of the input dictionary
    list_keys = list(new_dir.keys())  # Get the keys as a list

    for i in list_keys:
        new_dir[i] *= 2  # Multiply the value by 2 for each key

    return new_dir  # Return the new dictionary with multiplied values
