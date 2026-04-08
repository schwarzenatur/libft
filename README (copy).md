*This project has been created as part of the 42 curriculum by hbasaran*

# Libft 

# Description

Libft is a core project at 42 that focuses on rebuilding essential
functions from the standard C library while also extending it with
custom utilities.

The goals of this project are: - Strengthen understanding of memory
management - Master pointer operations and low-level logic - Create a
reusable static library (libft.a) for future projects

Each function is implemented to match the behavior described in official
man pages, using the required “ft_” prefix.

------------------------------------------------------------------------

# Instructions

The project is compiled using a Makefile with the following flags:

-Wall -Wextra -Werror

Available Makefile rules:

-   make → Compiles all source files and creates libft.a
-   make clean → Removes object files
-   make fclean → Removes object files and the library file
-   make re → Rebuilds everything from scratch

The static library is generated using:

ar rcs libft.a

To link the library in another project:

cc main.c -L. -lft -o program

------------------------------------------------------------------------

# Library Structure

The library is organized into three main sections:

## Part 1 – Libc Re-implementations

Standard C library functions re-written from scratch:

Character classification: ft_isalpha, ft_isdigit, ft_isalnum,
ft_isascii, ft_isprint

Memory handling: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr,
ft_memcmp

String operations: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr,
ft_strrchr, ft_strncmp, ft_strnstr

Conversions: ft_atoi, ft_toupper, ft_tolower

Memory allocation: ft_calloc, ft_strdup

All implementations replicate original libc behavior.

------------------------------------------------------------------------

## Part 2 – Utility Functions

Additional helper functions focused on strings and memory:

ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

These functions emphasize dynamic allocation and safe string
manipulation.

------------------------------------------------------------------------

## Part 3 – Linked List Implementation

A singly linked list structure is implemented as follows:

typedef struct s_list { void content; struct s_list next; } t_list;

Functions included:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap

This section builds understanding of: - Dynamic memory handling -
Pointer-to-pointer usage - Function pointers - Data structure
manipulation

------------------------------------------------------------------------

# Technical Constraints

-   No use of global variables
-   No memory leaks allowed
-   Compilation must pass with -Wall -Wextra -Werror
-   Library must be located at the root directory
-   Only authorized functions (malloc, free, write) are used

------------------------------------------------------------------------

# Resources

-   Official man pages
-   GNU C documentation
-   42 project subject PDF

AI tools were used only for conceptual support and validation of logic.
All code was written, tested, and debugged manually.

*All logic implementation and final source code were authored by hbasaran*