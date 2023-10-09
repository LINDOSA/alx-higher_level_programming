#!/usr/bin/python3

if __name__ == "__main__":
    # Import the sys module to work with command-line arguments
    import sys

    # Get the list of command-line arguments excluding the script name
    arguments = sys.argv[1:]

    # Count the number of command-line arguments
    count = len(arguments)

    # Print the appropriate message based on the number of arguments
    if count == 0:
        print("0 arguments.")
    elif count == 1:
        print("1 argument:")
    else:
        print(f"{count} arguments:")

    # Print each argument along with its index
    for i, arg in enumerate(arguments, start=1):
        print(f"{i}: {arg}")
