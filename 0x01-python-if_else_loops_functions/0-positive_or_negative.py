#!/usr/bin/python3
import random

# Generate a random number and store it in 'number'
number = random.randint(-10, 10)

# Print the generated number
print("The number is:", number)

# Check if the number is positive, negative, or zero, and print the result
if number > 0:
    print("It's a positive number.")
elif number == 0:
    print("It's zero.")
else:
    print("It's a negative number.")

