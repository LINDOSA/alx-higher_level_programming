#!/usr/bin/python3

import sys


def add_arguments(argv):
    """Calculate and print the sum of numerical arguments."""
    total = 0
    # Start from index 1 to skip the script name (index 0).
    for arg in argv[1:]:
        total += int(arg)
    print(total)


if __name__ == "__main__":
    # Pass the command-line arguments (excluding script name) to the function.
    add_arguments(sys.argv)
