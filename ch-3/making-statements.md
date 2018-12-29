# Making Statements

[README](../README.md)

## Notes

### Branching with if
``` cpp
if ( test-expression )
{ 
    // statements-to-be-executed-when-true 
}

if ( test-expression )
{
    // statements-to-be-executed-when-true
}
else
{
    // statements-to-be-executed-when-false
}

```

### Switching branches
``` cpp
switch ( variableName )
{
    case value1:
        // do something if value1
        break;
    case value2:
        // do something if value2
        break;
    default:
        // if none of the above values
}
```

### Looping For
``` cpp
for (initialiser; text-expression; incrementer)
{
    // do something ...
}
```

### Looping While
- Standard while loop ...
``` cpp
while (test-expression)
{
    // do something iteratively ...
}
```
- Do while loop ...
``` cpp
do {
    // do something iteratively ...
} while (test-expression)
```
- In the do-while loop, there will always be at least 1 iteration because the expression is not evaluated until after the first evaluation
- A **break** statement can be used in the code to break out of the loop
- A **continue** statement can be used to skip the current iteration and move to the next

### Functions
- Benefits of using functions:
    - Functions make program code easier to understand and maintain
    - Tried and Tested functions can be re-used by other programs
    - Several programmers can divide workload in large projects by working on different functions of the program.

#### Declaring functions
``` cpp
float functionName(float, float);
```

#### Defining funcitons
``` cpp
float functionName(float float1, float float2)
{
    return float1 + float2;
}
```

#### Variable scope
- Variables that are declared in a function can only be used locally within that function - this is known as **variable scope**

### Arguments
- **cin** function can be used with the **>>** input stream operator to pass a value from the console to a variable in a program
``` cpp
float num;
cout << "Please enter a number: ";
cin >> num;
```
- When declaring a function, you can optionally provide a default value to use for input arguments, e.g. ...
``` cpp
float fToC (float degreesF = 32.0);
```

### Overloading functions
- Overloading means that we can have multiple functions with the same name, as long as they have different arguments signatures. For example, we could have multiple functions called computeArea for circles, with diameter as the parameter, and rectangles, with height and width as the parameters
``` cpp
// function declaration
float computeArea (float diameter);
float computeArea (float height, float width);
```
