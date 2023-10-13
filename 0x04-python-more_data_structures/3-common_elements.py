#!/usr/bin/python3

def common_elements(set_1, set_2):
    """
    Find the common elements between two sets.

    Args:
        set_1 (set): The first input set.
        set_2 (set): The second input set.

    Returns:
        set: A new set containing the common elements of set_1 and set_2.
    """
    common_set = set_1 & set_2  # Use the '&' operator to find common elements
    return common_set
