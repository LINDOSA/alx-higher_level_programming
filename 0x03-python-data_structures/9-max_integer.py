#!/usr/bin/python3

def max_integer(my_list=[]):
    # Check if the input list is not empty
    if my_list:
        # Sort the list in descending order
        my_list.sort(reverse=True)
        # Return the first element (maximum) of the sorted list
        return my_list[0]
    # Return None if the input list is empty
    return None
