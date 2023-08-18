#!/usr/bin/python3

def only_diff_elements(set_1, set_2):
    """
    Find the elements that are unique to each set.

    Args:
        set_1 (set): The first input set.
        set_2 (set): The second input set.

    Returns:
        set: A new set containing elements that are present in either set_1 or set_2, but not in both.
    """
    diff_set = set_1 ^ set_2  # Use the '^' operator to find differing elements
    return diff_set

