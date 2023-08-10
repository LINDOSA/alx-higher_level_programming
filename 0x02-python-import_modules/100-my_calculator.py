#!/usr/bin/python3

import sys
from calculator_1 import add, sub, mul, div

def main():
    operators = ["+", "-", "*", "/"]
    if len(sys.argv) != 4:
        print("Usage: {} <num1> <operator> <num2>".format(sys.argv[0]))
        sys.exit(1)

    num1 = int(sys.argv[1])
    operator = sys.argv[2]
    num2 = int(sys.argv[3])

    if operator not in operators:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)

    result = 0
    if operator == "+":
        result = add(num1, num2)
    elif operator == "-":
        result = sub(num1, num2)
    elif operator == "*":
        result = mul(num1, num2)
    elif operator == "/":
        result = div(num1, num2)

    print("{:d} {} {:d} = {:d}".format(num1, operator, num2, result))

if __name__ == "__main__":
    main()

