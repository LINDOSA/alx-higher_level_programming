#!/usr/bin/python3
# 6-print_comb3.py

for first_digit in range(10):
    for second_digit in range(first_digit + 1, 10):
        print(f"{first_digit:02}, {second_digit:02}", end=", ")

print("99")

