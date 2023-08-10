#!/usr/bin/python3

# Import necessary components
import sys
import calculator_1

# Check the number of command-line arguments
if len(sys.argv) != 4:
    print("Usage: {} <num1> <operator> <num2>".format(sys.argv[0]))
    sys.exit(1)

# Extract command-line arguments
num1 = int(sys.argv[1])
operator = sys.argv[2]
num2 = int(sys.argv[3])

# Define a dictionary of valid operators and corresponding functions
operators = {
    "+": calculator_1.add,
    "-": calculator_1.sub,
    "*": calculator_1.mul,
    "/": calculator_1.div
}

# Check if the operator is valid
if operator in operators:
    # Perform the arithmetic operation
    result = operators[operator](num1, num2)
    print("{:d} {} {:d} = {:d}".format(num1, operator, num2, result))
else:
    print("Unknown operator. Available operators: +, -, * and /")
    sys.exit(1)

# Exit with a status code indicating successful execution
sys.exit(0)

