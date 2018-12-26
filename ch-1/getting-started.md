# Chapter 1: Getting Started

[README](../README.md)

## Notes

### Comments
- Single line comments are prefixed with two forward-slashes '//'

### Functions
- Main function returns a 0 when run successully by tradition

### Arrays
- Array numbering begins at zero

### Variables
- Do not abbbreviate variable names so they are easy to read
- Boolean variables should begin with is* so that they are easily recognisable
- Variable names are case sensitive so variableOne is different to variableone

### Vector Arrays
- Vectors are alternatives to regular arrays but the size can be changed
- In order to use vectors in a C++ program we must import the vector library ...
``` cpp
#include <vector>
```

### Contants
- Data that will not change during the execution of the program should be stored as a contant. This allows the compiler to better check for errors, e.g. does anything attempt to alter the constant.
- A constant can be defined for any data type
- Typically, constants are delcared with UPPERCASE names
- Constants must be initilised when declared

### Enums
- Represents a sequence of integers
- Names can be assigned, that can be used instead of each integer to reference the number

### Custom Data Types
- Declared as enums with the **typedef** keyword
- Name for the custom type added to the end of the declaration