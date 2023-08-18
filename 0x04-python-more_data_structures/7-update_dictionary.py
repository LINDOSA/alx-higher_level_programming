#!/usr/bin/python3

def update_dictionary(a_dictionary, key, value):
    """
    Replace or add key/value pairs in a dictionary.

    Args:
        a_dictionary (dict): The input dictionary.
        key: The key to update or add.
        value: The value to associate with the key.

    Returns:
        dict: The updated dictionary.
    """
    a_dictionary[key] = value  # Assign the new value to the key
    return a_dictionary  # Return the updated dictionary

