#!/usr/bin/python3

def best_score(a_dictionary):
    """
    Find the key with the highest value in the dictionary.

    Args:
        a_dictionary (dict): The input dictionary.

    Returns:
        object: The key with the highest value.
    """
    if not a_dictionary:
        return None  # Return None if the dictionary is empty

    return max(a_dictionary, key=a_dictionary.get)
