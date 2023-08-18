#!/usr/bin/python3

def complex_delete(a_dictionary, value):
    # Create a list of keys from the dictionary
    list_keys = list(a_dictionary.keys())
    
    # Iterate over the keys to check values
    for key in list_keys:
        # Check if the value associated with the key matches the given value
        if value == a_dictionary.get(key):
            # Delete the key-value pair from the dictionary
            del a_dictionary[key]
    
    return a_dictionary

