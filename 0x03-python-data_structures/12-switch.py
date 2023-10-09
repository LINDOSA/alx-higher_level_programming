#!/usr/bin/python3

# Initial values
a = 89
b = 10

# Swap the values of 'a' and 'b' using tuple unpacking
a, b = b, a

# Print the swapped values
print("a={:d} - b={:d}".format(a, b))  # Output: "a=10 - b=89"
