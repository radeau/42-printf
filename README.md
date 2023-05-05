
Sure! Here's an updated README file without the modifiers:

# ft_printf()

The `ft_printf()` function is a C function that is used to print formatted output to the console or to a file. This project aims to recode the `printf()` function from the C standard library while learning to use variable numbers of arguments, also known as variadic functions.

## Table of Contents

- [Function Prototype](#function-prototype)
- [Description](#description)
- [Usage](#usage)
- [Supported Conversions](#supported-conversions)
- [Return Value](#return-value)
- [Examples](#examples)
- [Author](#authors)

## Function Prototype

```c
int ft_printf(const char *format, ...);
```

## Description

The `ft_printf()` function takes a format string and any number of additional arguments as input. The format string contains conversion specifiers, which begin with a '%' character and are followed by a character that specifies the type of output to be printed.

The `ft_printf()` function then processes the format string and any additional arguments, and prints the formatted output to the console or to a file.

## Usage

The `ft_printf()` function can be used in a similar way to the `printf()` function from the C standard library. To use the `ft_printf()` function, include the header file "ft_printf.h" in your C program:

```c
#include "ft_printf.h"
```

Then call the `ft_printf()` function with the desired format string and any additional arguments:

```c
ft_printf("Hello, %s!", "world");
```

## Supported Conversions

The `ft_printf()` function supports the following conversion specifiers:

| Specifier | Output |
| --------- | ------ |
| `%c`        | Character |
| `%s`        | String of characters |
| `%p`        | Pointer address |
| `%d` or `%i`  | Signed decimal integer |
| `%u`        | Unsigned decimal integer |
| `%x`        | Unsigned hexadecimal integer (lowercase) |
| `%X`        | Unsigned hexadecimal integer (uppercase) |
| `%%`        | Percent sign |

## Return Value

The `ft_printf()` function returns the number of characters printed to the console or to a file. If an error occurs, `ft_printf()` returns a negative value.

## Examples

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("%d + %d = %d\n", 2, 3, 5);
    ft_printf("Hex: %x, Hex (uppercase): %X\n", 255, 255);
    return 0;
}
```

Output:
```
Hello, world!
2 + 3 = 5
Hex: ff, Hex (uppercase): FF
```

## Authors

This project was implemented by [radeau](www.github.com/radeau) as a part of 42 Abu Dhabi Project. 
