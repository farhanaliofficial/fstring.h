# FString Library
[![GitHub](https://img.shields.io/github/license/farhanaliofficial/fstring.h)](https://github.com/farhanaliofficial/fstring.h/blob/main/LICENSE)
[![GitHub release (latest by date)](https://img.shields.io/github/v/release/farhanaliofficial/fstring.h)](https://github.com/farhanaliofficial/fstring.h/releases)
[![GitHub stars](https://img.shields.io/github/stars/farhanaliofficial/fstring.h.svg)](https://github.com/farhanaliofficial/fstring.h/stargazers)

FString is a lightweight C library for working with strings. It provides simple functions for string creation, manipulation, and comparison.

## Installation
To use FString in your C project, simply include the `fstring.h` header file in your source code and link against the `fstring.c` file.

## Usage
### String Creation
To create a new string, use the `new_string` function, which takes a C-style string (`char*`) as input:
```c
string* my_string = new_string("Hello, world!");
```
### String Concatenation
You can concatenate two strings using the `cat_string` function. It appends the second string to the first one:
```c
string* str1 = new_string("Hello");
string* str2 = new_string(", world!");
cat_string(str1, str2);
```
You can also concatenate a C-style string to an existing FString using `cat_cstring`:
```c
string* str = new_string("Hello");
cat_cstring(str, ", world!");
```
### String Comparison
FString provides functions to compare strings. Use `cmp_string` to compare two FString objects:
```c
string* str1 = new_string("Hello");
string* str2 = new_string("Hello");
int result = cmp_string(str1, str2);
```
To compare an FString with a C-style string, use `cmp_cstring`:
```c
string* str = new_string("Hello");
int result = cmp_cstring(str, "Hello");
```
### Substring Search
You can search for a substring within a string using `sub_string`. It returns the index of the first occurrence of the substring:
```c
string* str = new_string("Hello, world!");
string* sub = new_string("world");
int index = sub_string(str, sub);
```
To search for a C-style substring within an FString, use `sub_cstring`:
```c
string* str = new_string("Hello, world!");
int index = sub_cstring(str, "world");
```
### Other Operations
- `get_string`: Retrieve the underlying C-style string.
- `length_string`: Get the length of the FString.
- `free_string`: Free the memory allocated for an FString object.
## Error Handling
FString provides basic error handling. It returns NULL in case of memory allocation failure. Make sure to check for NULL returns when using FString functions.
## License
This library is released under the MIT License. See the [LICENSE](LICENSE) file for details.
## Contributions
Contributions are welcome! Please feel free to submit issues or pull requests.
## Author
This library is maintained by Farhan Ali. 
