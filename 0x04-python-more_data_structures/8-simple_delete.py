#!/usr/bin/python3

def simple_delete(a_dictionary, key=""):
    """
    Delete a key from a dictionary if it exists.

    Args:
        a_dictionary (dict): The input dictionary.
        key: The key to delete from the dictionary.

    Returns:
        dict: The updated dictionary after key deletion.
    """
    if a_dictionary.get(key) is not None:
        del a_dictionary[key]  # Delete the key if it exists
    return a_dictionary  # Return the updated dictionary
