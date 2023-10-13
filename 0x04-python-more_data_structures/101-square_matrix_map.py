#!/usr/bin/python3

def square_matrix_map(matrix=[]):
    # Iterate over each row in the matrix using map
    squared_rows = map(lambda row:
                       # For each element in the row, calculate its square
                       list(map(lambda element: element**2, row)),
                       matrix)

    # Convert the squared rows iterator to a list of lists
    squared_matrix = list(squared_rows)

    return squared_matrix
