#!/usr/bin/python3

def uniq_add(my_list=[]):
    # Convert the input list to a set to remove duplicates
    uniq_list = set(my_list)
    
    # Initialize a variable to hold the sum of unique elements
    num = 0

    # Iterate through the unique elements in the set
    for i in uniq_list:
        num += i  # Add the current unique element to the sum

    return num  # Return the sum of unique elements

