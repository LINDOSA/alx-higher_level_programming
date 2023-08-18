#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    """
    Print the dictionary's keys and corresponding values in sorted order.

    Args:
        a_dictionary (dict): The input dictionary.
    """
    list_ord = list(a_dictionary.keys())  # Get the keys as a list
    list_ord.sort()  # Sort the keys

    for i in list_ord:
        print("{}: {}".format(i, a_dictionary.get(i)))  # Print key-value pairs

