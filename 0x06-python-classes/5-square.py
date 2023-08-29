#!/usr/bin/python3
"""Define a class Square."""


class Square:
    """Represent a square with encapsulated size attribute, area calculation, and printing."""

    def __init__(self, size):
        """Initialize a new square.

        Args:
            size (int): The size of the new square.
        """
        self.size = size

    @property
    def size(self):
        """Get the current size of the square."""
        return self.__size

    @size.setter
    def size(self, value):
        """Set the size of the square with validation."""
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """Calculate and return the area of the square."""
        return self.__size * self.__size

    def my_print(self):
        """Print the square using the # character."""
        for i in range(self.__size):
            [print("#", end="") for _ in range(self.__size)]
            print("")
        if self.__size == 0:
            print("")

