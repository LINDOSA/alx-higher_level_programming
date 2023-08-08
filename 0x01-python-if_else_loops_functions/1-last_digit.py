#!/usr/bin/python3
import random

# Generate a random number and store it in 'number'
number = random.randint(-10000, 10000)

# Get the last digit of the number
last_digit = abs(number) % 10

# Print the output
print("Last digit of", number, "is", last_digit, end=" ")

# Determine and print the message based on the last digit
if last_digit > 5:
    print("and is greater than 5")
elif last_digit == 0:
    print("and is 0")
else:
    print("and is less than 6 and not 0")

