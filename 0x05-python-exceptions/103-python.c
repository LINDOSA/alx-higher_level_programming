#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
void print_python_float(PyObject *p);

void print_python_list(PyObject *p) {
    if (!PyList_Check(p)) {
        printf("[ERROR] Invalid List Object\n");
        return;
    }

    Py_ssize_t size = PyList_Size(p);
    PyListObject *list = (PyListObject *)p;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", list->allocated);

    for (Py_ssize_t i = 0; i < size; i++) {
        PyObject *item = list->ob_item[i];
        const char *type = item->ob_type->tp_name;
        printf("Element %ld: %s\n", i, type);

        if (strcmp(type, "bytes") == 0)
            print_python_bytes(item);
        else if (strcmp(type, "float") == 0)
            print_python_float(item);
    }
}

void print_python_bytes(PyObject *p) {
    if (!PyBytes_Check(p)) {
        printf("[ERROR] Invalid Bytes Object\n");
        return;
    }

    Py_ssize_t size = PyBytes_GET_SIZE(p);
    PyBytesObject *bytes = (PyBytesObject *)p;

    printf("[.] bytes object info\n");
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", bytes->ob_sval);

    if (size > 10)
        size = 10;

    printf("  first %ld bytes: ", size);
    for (Py_ssize_t i = 0; i < size; i++) {
        printf("%02hhx%c", bytes->ob_sval[i], i == size - 1 ? '\n' : ' ');
    }
}

void print_python_float(PyObject *p) {
    if (!PyFloat_Check(p)) {
        printf("[ERROR] Invalid Float Object\n");
        return;
    }

    PyFloatObject *float_obj = (PyFloatObject *)p;
    char *buffer = PyOS_double_to_string(float_obj->ob_fval, 'r', 0, Py_DTSF_ADD_DOT_0, NULL);

    printf("[.] float object info\n");
    printf("  value: %s\n", buffer);
    PyMem_Free(buffer);
}

