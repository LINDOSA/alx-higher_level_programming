#!/usr/bin/python3

import sys

if __name__ == "__main__":
    # Get the number of arguments
    num_args = len(sys.argv) - 1

    # Print the number of arguments
    if num_args == 0:
        print("No arguments.")
    elif num_args == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(num_args))

    # Print each argument with its position
    for i, arg in enumerate(sys.argv[1:], start=1):
        print("{}: {}".format(i, arg))

