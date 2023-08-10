#!/usr/bin/python3

if __name__ == "__main__":
    # Import the sys module to work with command-line arguments
    import sys

    # Initialize the total to zero
    total = 0

    # Iterate over the command-line arguments (excluding the script name)
    for i in range(1, len(sys.argv)):
        # Convert each argument to an integer and add it to the total
        total += int(sys.argv[i])

    # Print the total sum of the command-line arguments
    print("Total sum: {}".format(total))


