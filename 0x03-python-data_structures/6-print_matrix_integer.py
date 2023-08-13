#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    # Iterate through each row in the matrix
    for row in matrix:
        # Iterate through each element (column) in the current row
        for col in row:
            # Print the element formatted as an integer, with space after each element except the last one
            print("{:d}".format(col), end=" " if col != row[-1] else "")
        # Print a newline character to move to the next row
        print()

