#!/usr/bin/python3

if __name__ == "__main__":
    # Import functions from calculator_1.py
    from calculator_1 import add, sub, mul, div

    # Define values
    a = 10
    b = 5

    # Calculate and print the results
    addition_result = add(a, b)
    subtraction_result = sub(a, b)
    multiplication_result = mul(a, b)
    division_result = div(a, b)

    # Print the results
    print("Result of {} + {} = {}".format(a, b, addition_result))
    print("Result of {} - {} = {}".format(a, b, subtraction_result))
    print("Result of {} * {} = {}".format(a, b, multiplication_result))
    print("Result of {} / {} = {}".format(a, b, division_result))

