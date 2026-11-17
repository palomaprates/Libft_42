_This project has been created as part of the 42 curriculum by pprates._

# Libft

## Description

Libft is a custom C library that recreates standard C functions and introduces additional utilities. It covers string manipulation, memory management, conversions, and linked lists.

The project builds `libft.a`, a static library containing 43 functions declared in `libft.h`. It develops an understanding of pointers, dynamic memory allocation, data structures, and reusable C code.

## Instructions

Requirements: a C compiler (`cc`), `make`, and `ar`.

Compile the library from the repository root:

```sh
make
```

This creates `libft.a` using `-Wall -Wextra -Werror`

Available commands:

- `make clean` — removes object files.
- `make fclean` — removes object files and the library.
- `make re` — rebuilds the library.

To use Libft, include its header in your program. For example, save the following as `main.c` in the repository root:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}
```

Compile and run the example:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o example
./example
```

## Library Contents

### Part 1 — Libc Functions (23)

| Function     | Description                                                                             |
| ------------ | --------------------------------------------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is alphabetic.                                               |
| `ft_isdigit` | Checks whether a character is a decimal digit.                                          |
| `ft_isalnum` | Checks whether a character is alphabetic or a decimal digit.                            |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set.                              |
| `ft_isprint` | Checks whether a character is printable.                                                |
| `ft_strlen`  | Returns the length of a string.                                                         |
| `ft_memset`  | Fills a memory area with a byte value.                                                  |
| `ft_bzero`   | Fills a memory area with zero bytes.                                                    |
| `ft_memcpy`  | Copies bytes between non-overlapping memory areas.                                      |
| `ft_memmove` | Copies bytes safely between potentially overlapping memory areas.                       |
| `ft_strlcpy` | Copies a string into a size-limited destination and returns the source length.          |
| `ft_strlcat` | Appends a string within the destination size and returns the length it tried to create. |
| `ft_toupper` | Converts a lowercase letter to uppercase.                                               |
| `ft_tolower` | Converts an uppercase letter to lowercase.                                              |
| `ft_strchr`  | Finds the first occurrence of a character in a string.                                  |
| `ft_strrchr` | Finds the last occurrence of a character in a string.                                   |
| `ft_strncmp` | Compares up to a specified number of characters in two strings.                         |
| `ft_memchr`  | Finds the first occurrence of a byte in a memory area.                                  |
| `ft_memcmp`  | Compares two memory areas byte by byte.                                                 |
| `ft_strnstr` | Finds a substring within a limited portion of a string.                                 |
| `ft_atoi`    | Converts the initial numeric portion of a string to an integer.                         |
| `ft_calloc`  | Allocates memory for an array and initializes it to zero.                               |
| `ft_strdup`  | Allocates and returns a copy of a string.                                               |

### Part 2 — Additional Functions (11)

| Function        | Description                                                                              |
| --------------- | ---------------------------------------------------------------------------------------- |
| `ft_substr`     | Allocates a substring from a starting index, up to a given length.                       |
| `ft_strjoin`    | Allocates a new string by concatenating two strings.                                     |
| `ft_strtrim`    | Allocates a copy with characters from a set removed from both ends.                      |
| `ft_split`      | Splits a string by a delimiter into an allocated, NULL-terminated array of strings.      |
| `ft_itoa`       | Allocates a string representing an integer.                                              |
| `ft_strmapi`    | Allocates a string by applying a function to each character and its index.               |
| `ft_striteri`   | Applies a function to each character's address and index, modifying the string in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor.                                                 |
| `ft_putstr_fd`  | Writes a string to a file descriptor.                                                    |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor.                              |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.                                                  |

Free allocated results when they are no longer needed. For `ft_split`, free each string before freeing the array.

### Part 3 — Linked Lists (9)

The `t_list` structure declared in `libft.h` stores a `void *content` pointer and a pointer to the next node.

| Function          | Description                                                                                                    |
| ----------------- | -------------------------------------------------------------------------------------------------------------- |
| `ft_lstnew`       | Allocates a node containing the supplied content pointer, with `next` set to NULL.                             |
| `ft_lstadd_front` | Adds a node to the beginning of a list.                                                                        |
| `ft_lstsize`      | Counts the nodes in a list.                                                                                    |
| `ft_lstlast`      | Returns the last node in a list.                                                                               |
| `ft_lstadd_back`  | Adds a node to the end of a list.                                                                              |
| `ft_lstdelone`    | Deletes a node, freeing its content with the supplied `del` function.                                          |
| `ft_lstclear`     | Deletes all nodes and their contents using `del`, then sets the list pointer to NULL.                          |
| `ft_lstiter`      | Applies a function to the content of each node.                                                                |
| `ft_lstmap`       | Creates a new list by applying a function to each node's content, using `del` for cleanup if allocation fails. |

`ft_lstnew` stores the content pointer without duplicating its data. Supply a `del` callback appropriate for the content's ownership when deleting nodes or clearing a list.

## Resources

- [42 Libft Subject](https://cdn.intra.42.fr/pdf/pdf/226730/en.subject.pdf)
- [Linux Man Pages](https://man7.org/linux/man-pages/index.html)

### AI Usage

AI was used as a learning resource to clarify concepts and understand function behavior.

## Author

**pprates** — 42 Lisboa
