# Chapter 2 - Performing Operations

[README](../README.md)

## Notes

### Arithmetic
- Operators that can be used for arithmetic

| Operator  | Operation     |
|-----------|-----------    |
| +         | Addition      |
| -         | Subtraction   |
| *         | Multiplication|
| /         | Division      |
| %         | Modulus       |
| ++        | Increment     |
| --        | Decrement     |

- When using multiple operators in one command, parentheses can be used to make sure a section of the command is performed first
- Where there are multiple parentheses, the innermost parentheses are calculated first
- Increment and Decrement operators can be placed before or after the value...
    - if placed before the value, the value is immediately updated
    - if placed after the value, the value is first noted and then updated

### Assigning Values
| Operator  | Example   | Equivalent    |
|-----------|-----------|---------------|
| =         | a = b     | a = b         |
| +=        | a += b    | a = (a + b)   |
| -=        | a -= b    | a = (a - b)   |
| *=        | a *= b    | a = (a * b)   |
| /=        | a /= b    | a = (a / b)   |
| %=        | a %= b    | a = (a % b)   |

### Comparing Values
| Operator  | Comparitive Text  |
|-----------|-------------------|
| ==        | Equality          |
| !=        | Iequality         |
| >         | Greater than      |
| <         | Less than         |
| >=        | Greater or equal  |
| <=        | Less or equal     |

- The equality operator compares the ASCII code of two char variables and therefore 'A' is not equal to 'a'

### Assessing Logic
| Operator  | Operation     |
|-----------|---------------|
| &&        | Logical AND   |
| ||        | Logical OR    |
| !         | Logical NOT   |

- In C++, a zero represents the Boolean **false**, and any non-zero value represents the Boolean **true**

### Examining Conditions

#### Ternary Operator
- Takes three expressions or values. If the first is true, the second expression or value is returned, otherwise the third value or expression is returned

### Establishing Size
- Declaration of variable allocates system memory
- Amount of memory allocated depends on the system and data type
- The memory size of a variable using the sizeof operator
``` cpp
sizeof(variableName);
```

### Casting data types
- two ways of casting
    - Traditional
    ``` cpp
    variable-name = (data-type) variable-name;
    ```
    - With angled brackets
    ``` cpp
    variable-name = static_cast <data-type> variable-name;
    ```