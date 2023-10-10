#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	int size, i;

	PyObject *obj;

	size = Py_SIZE(p);
	printf("[*] Size of the Python List = %d\n", size);
	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);
		obj = PyList_GetItem(p, i);
		if (obj != NULL)
			printf("%s\n", Py_TYPE(obj)->tp_name);
		else
			printf("Failed to retrieve object\n");
	}
}
