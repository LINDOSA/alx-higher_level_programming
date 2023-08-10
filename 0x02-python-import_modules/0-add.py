#!/usr/bin/python3

if __name__ == "__main__":
    # Import the add function from add_0.py
    from add_0 import add

    # Assign values
    a = 1
    b = 2

    # Calculate the sum
    sum_result = add(a, b)

    # Display the result
    print(f"{a} + {b} = {sum_result}")

