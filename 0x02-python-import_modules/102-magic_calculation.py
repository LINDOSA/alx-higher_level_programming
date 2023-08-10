
#!/usr/bin/python3

def magic_calculation(a, b):
    # Import specific functions from the module "magic_calculation_102"
    from magic_calculation_102 import add, sub
    
    # Compare a and b
    if a < b:
        # If a is less than b, perform addition operation multiple times
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
        return c
    else:
        # If a is not less than b, perform subtraction operation
        return sub(a, b)

