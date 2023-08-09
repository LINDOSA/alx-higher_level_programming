#!/usr/bin/python3
# This script demonstrates string manipulation using slicing.

# Define the original string
original_str = "Python is an interpreted, interactive, object-oriented programming" \
               " language that combines remarkable power with very clear syntax"

# Slice and concatenate parts of the string
sliced_str = original_str[39:67] + original_str[107:112] + original_str[:6]

# Print the modified string
print(sliced_str)

