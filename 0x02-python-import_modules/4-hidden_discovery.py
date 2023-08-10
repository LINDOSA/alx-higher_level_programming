#!/usr/bin/python3

if __name__ == "__main__":
    # Import the module
    import hidden_4

    # Get all attributes from the module
    names = dir(hidden_4)

    # Filter and print only names that don't start with '__'
    for name in names:
        if not name.startswith("__"):
            print(name)
