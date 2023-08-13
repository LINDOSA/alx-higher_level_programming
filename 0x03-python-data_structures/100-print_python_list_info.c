#include <Python.h>

/**
 * print_python_list_info - Prints basic information about a Python list.
 * @p: A PyObject representing a list.
 */
void print_python_list_info(PyObject *p)
{
    int size, alloc, i;
    PyObject *obj;

    // Get the size (number of elements) of the Python list
    size = Py_SIZE(p);
    
    // Get the allocated memory (in number of elements) for the list
    alloc = ((PyListObject *)p)->allocated;

    // Print the size and allocation details of the list
    printf("[*] Size of the Python List = %d\n", size);
    printf("[*] Allocated = %d\n", alloc);

    // Iterate through each element in the list and print its type name
    for (i = 0; i < size; i++)
    {
        printf("Element %d: ", i);

        // Get the i-th element from the list
        obj = PyList_GetItem(p, i);
        
        // Print the type name of the element
        printf("%s\n", Py_TYPE(obj)->tp_name);
    }
}

