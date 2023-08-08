#!/usr/bin/python3
# 102-magic_calculation.py


def magic_calculation(a, b, c):
    if a < b:
        result = c
    elif c > b:
        result = a + b
    else:
        result = a * b - c
    
    return result

