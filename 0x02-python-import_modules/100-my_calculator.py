#!/usr/bin/python3

# Import the necessary arithmetic functions and sys module
from calculator_1 import add, sub, mul, div 
import sys

# Check if the correct number of arguments is provided
if len(sys.argv) != 4:
    print("Usage: ./100-my_calculator.py <operand1> <operator> <operand2>")
    sys.exit(1)

# Define the arithmetic operations and their corresponding symbols
ops = {"+": add, "-": sub, "*": mul, "/": div}

# Check if the provided operator is valid
if sys.argv[2] not in ops:
    print("Unknown operator. Available operators: +, -, * and /")
    sys.exit(1)

# Retrieve operands from command-line arguments
a = int(sys.argv[1])
b = int(sys.argv[3])

# Perform the selected arithmetic operation and print the result
result = ops[sys.argv[2]](a, b)
print(f"{a} {sys.argv[2]} {b} = {result}")

