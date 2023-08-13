#!/usr/bin/python3

def no_c(my_string):
    # Initialize an empty string to store the result
    new_string = ""

    # Iterate through each character in the input string
    for char in my_string:
        # Check if the character is not 'c' or 'C'
        if char != 'c' and char != 'C':
            # If not 'c' or 'C', add it to the result string
            new_string += char
    
    # Return the new string with 'c' and 'C' characters removed
    return new_string
