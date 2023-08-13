#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    # Get the lengths of the input tuples
    len_a, len_b = len(tuple_a), len(tuple_b)
    
    # Calculate the sum of elements in corresponding positions of the input tuples
    # If the tuples have fewer than 2 elements, use 0 for missing elements
    new_tuple = (
        (tuple_a[0] if len_a >= 1 else 0) + (tuple_b[0] if len_b >= 1 else 0),
        (tuple_a[1] if len_a >= 2 else 0) + (tuple_b[1] if len_b >= 2 else 0)
    )
    
    # Return the new tuple containing the element-wise sum
    return new_tuple

