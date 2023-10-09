#!/usr/bin/python3
# 3-print_reversed_list_integer.py

def print_reversed_list_integer(input_list=[]):
    """
    Prints all integers from a list in reverse order.

    Args:
        input_list (list): The list of integers to be printed in reverse.
    """
    if isinstance(input_list, list):
        input_list.reverse()
        for num in input_list:
            print("{:d}".format(num))
