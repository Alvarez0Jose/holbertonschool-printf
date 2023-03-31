# holbertonschool-PRINTF

## Table of content

[What is this project](#What-is-this-project)

[Use](#Use)

[Description of implemented option](#Description-the-implemented-option)

[Description of file structure](#Description-of-file-structure)

[Creators](#Creators)

### What is this project 

The aim of this project is to code a version based on the original printf function, ours implement the following specifiers %c, %s, %%, %d and %i. In this project you will see how we implemented different concepts learned through out our first 2 months in class.


### Use


To use the core function _printf, you can call it like the original printf, see man printf for more information.

For example: 
```
Example 1:

int _printf(const char *format, ...)
_printf("My char %c, my char %c"), c, b);

OUTPUT : My char a, my char d

Example 2:

int _printf(const char *format, ...)
_printf("A week has %d days and a month has %i", l, digit);

       OUTPUT: A week has 7 days and a month has 30.

Example 3:

int _printf(const char *format, ...)
_printf("the hoodie was 20%% off on discount.");

       OUTPUT: the hoodie was 20% off on discount.

Example 4:

int _printf(const char *format, ...);
       _printf("%s", "I am freeeee!");

       OUTPUT: I am freeeee!


```

### Description of implemented option
%c - prints a character.

%s - prints a string.

%% - prints a %.

%d, %i - prints an integer.

### Description of file structure
| FileName | Description |
|---|---|
| man_3_printf  | This file contain the man page of our custom printf function.  |
| main.h  | This file is the header file.  |
| PRINTF.c  | This file contains the core function _printf. |
|  helper_functions.c | This file contains our auxiliary functions used to find and call the needed function. It was created in order to make the code easier to read and betty compliant. |
| _putchar.c  | This file contains the _putchar function.  |



### Creators

this project was created by MIGUEL MONTERO & JOSE ALVAREZ
