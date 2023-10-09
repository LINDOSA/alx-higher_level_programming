#!/usr/bin/python3
# 1-element_at.py

def element_at(my_list, idx):
    # Check if the index is negative
    if idx < 0:
        return None

    # Check if the index is within the range of the list
    if idx >= len(my_list):
        return None

    # Return the element at the specified index
    return (my_list[idx])
