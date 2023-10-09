#include <Python.h>
#include <stdio.h>

/**
 * print_python_list_info - Prints basic information about a Python list.
 * @p: A PyObject representing a list.
 */
void print_python_list_info(PyObject *p)
{
	long size, i;
	PyObject *obj;
	/* Get the size (number of elements) of the Python list */
	size = PyList_Size(p);
	/* Print the size and allocation details of the list */
	printf("[*] Size of the Python List = %ld\n", size);
	/* Insert a blank line for better readability */
	printf("\n");
	/* Iterate through each element in the list and print its type name */
	for (i = 0; i < size; i++)
	{
		printf("Element %ld: ", i);
		/* Get the i-th element from the list */
		obj = PyList_GetItem(p, i);
		/* Print the type name of the element */
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
