#!/usr/bin/python3
# 11-delete_at.py

def delete_at(my_list=[], idx=0):
    """
    Delete an item at the specified index in the list.

    :param my_list: The input list.
    :param idx: The index of the item to be deleted.
    :return: The modified list after the deletion.
    """
    # Check if the provided index is within the valid range
    if idx >= 0 and idx < len(my_list):
        # Use the "del" statement to remove the element at the specified index
        del my_list[idx]
    # Return the modified list, even if no deletion occurred
    return my_list
