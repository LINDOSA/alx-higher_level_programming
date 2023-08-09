#!/usr/bin/python3
# This script demonstrates string slicing and formatting.

# Define the word
word = "Holberton"

# Slice the first 3 letters
word_first_3 = word[:3]

# Slice the last 2 letters
word_last_2 = word[-2:]

# Slice the middle word excluding the first and last characters
middle_word = word[1:-1]

# Print the sliced parts using string formatting
print("First 3 letters: {}".format(word_first_3))
print("Last 2 letters: {}".format(word_last_2))
print("Middle word: {}".format(middle_word))

