# Handling Strings

[README](../README.md)

## Notes

### Creating string variables

- There is no native string data type in C++
- The <string> library class contains a string object that emulates a string data type
- The <string> library can be used in a program by using the #include directive at the start of the program, e.g.
``` cpp
#include <string>
```
- Once this library is included, a string variable can be declared in the same way as other data type variables

### Getting string input

- When you want to allow the user to input a string with spaces, the **getline()** function can be used
``` cpp
getline(cin, name)
// cin is the source function
// name is the variable that will hold the input
```
- the getline() function reads from an input "stream" until it encounters a newline character (\n), e.g. when you press the return or enter key

### Solving the string problem

- The <sstream> library allows a **stringstream** object to act as an intermediary, through whcih the string values can be converted to a numeric data type, and numberic values can be converted to a string

- When re-using the stringstring we need to empty it (set it to ""), and also set the bit flags (good, bad, eof, fail) to clear, by calling the clear() method

### Some string functions

| Functions             | Description                                   |
|-----------------------|-----------------------------------------------|
| size()                | Returns number of characters                  |
| capacity()            | Returns the current memory size               |
| empty()               | Returns true if empty string                  |
| clear()               | Clears the string                             |
| append(text)          | Appends text to the variable                  |
| compare(text)         | Returns number representing character diffs   |
| assign(a, b, c)       | Assigns text a to the string, from character position b to c |
| swap(a)               | Swaps the values of the variable with a       |
| find_first_of(a)      | find location of first instance of a          |
| find_last_of(a)       | find location of last instance of a           |
| find_first_not_of(a)  | find first location of character not in a     |
| find_last_not_of(a)   | find last location of character not in a      |
| insert(a, b)          | insert string b at position a                 |
| erase(a, b)           | erase a characters, starting at position b    |
| replace(a, b, c)      | remove b characters, starting at a, replace with c   |
| substr(a, b)          | select b number of characters, starting at position a   |
| at(a)                 | select character at position a                |