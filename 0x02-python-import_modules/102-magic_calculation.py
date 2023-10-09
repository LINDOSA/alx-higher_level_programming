#!/usr/bin/python3

def magic_calculation(a, b):
    """Perform a magic calculation based on the values of a and b."""
    from magic_calculation_102 import add, sub

    if a < b:
        # If a is less than b, perform a series of additions
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
        return c
    else:
        # If a is not less than b, perform a subtraction
        return sub(a, b)
