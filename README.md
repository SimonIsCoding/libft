# Libft - C Library Implementation

## 📚 Overview

This project is a custom implementation of the C standard library functions, commonly known as "libft" in programming education. It includes both basic string and memory manipulation functions, as well as bonus linked list operations.

## 🎯 What is Libft?

Libft is a foundational project that teaches:
- **Memory management** in C
- **String manipulation** without using standard library functions
- **Linked list data structures**
- **Pointer arithmetic**
- **C programming best practices**

## 🧠 Essential C Concepts for Beginners

### 1. Pointers - The Foundation

A **pointer** is a variable that stores the memory address of another variable. Think of it as a "house address" that tells you where to find the actual data.

```c
int number = 42;        // A regular variable
int *pointer = &number; // A pointer that stores the address of 'number'
```

#### Visual Representation:
```
Memory Layout:
┌─────────────┐    ┌─────────────┐
│   number    │    │  pointer    │
│     42      │    │  0x7fff...  │
│  0x7fff...  │◄───│             │
└─────────────┘    └─────────────┘
```

#### Why Pointers Matter:
- **Dynamic memory allocation**: Create variables at runtime
- **Pass by reference**: Modify original variables in functions
- **Data structures**: Build complex structures like linked lists
- **Efficiency**: Avoid copying large data

### 2. Linked Lists - Dynamic Data Structures

A **linked list** is a data structure where each element (node) contains data and a pointer to the next element.

#### Structure Definition:
```c
typedef struct s_list
{
    void            *content;    // The data stored in this node
    struct s_list   *next;       // Pointer to the next node
}                   t_list;
```

#### Visual Representation:
```
Linked List Structure:
┌─────────────┐     ┌─────────────┐     ┌─────────────┐     ┌─────────────┐
│   Node 1    │───▶│   Node 2    │───▶│   Node 3    │───▶│    NULL     │
│ content: "A"│     │ content: "B"│     │ content: "C"│     │             │
│ next: ──────┘     │ next: ──────┘     │ next: ──────┘     │             │
└─────────────┘     └─────────────┘     └─────────────┘     └─────────────┘
```

#### Advantages of Linked Lists:
- **Dynamic size**: Grow and shrink as needed
- **Efficient insertion/deletion**: No need to shift elements
- **Memory efficiency**: Only use what you need

#### Disadvantages:
- **No random access**: Must traverse from beginning
- **Extra memory**: Each node needs a pointer
- **Cache unfriendly**: Nodes may be scattered in memory

### 3. Memory Management

#### Stack vs Heap:
```
Memory Layout:
┌─────────────────────────────────────┐
│              Stack                  │
│  (Automatic variables, function     │
│   parameters, return addresses)     │
├─────────────────────────────────────┤
│              Heap                   │
│  (Dynamically allocated memory      │
│   with malloc, calloc, realloc)     │
├─────────────────────────────────────┤
│              Data Segment           │
│  (Global variables, static data)    │
├─────────────────────────────────────┤
│              Code Segment           │
│  (Program instructions)             │
└─────────────────────────────────────┘
```

#### Memory Allocation Functions:
- **`malloc(size)`**: Allocates memory (uninitialized)
- **`calloc(count, size)`**: Allocates and initializes to zero
- **`free(ptr)`**: Releases allocated memory
- **`realloc(ptr, size)`**: Resizes allocated memory

## 📁 Project Structure

### Core Functions (Part 1)
```
String Functions:
├── ft_strlen.c      - Calculate string length
├── ft_strchr.c      - Find character in string
├── ft_strrchr.c     - Find last occurrence of character
├── ft_strncmp.c     - Compare strings
├── ft_strnstr.c     - Find substring
├── ft_strdup.c      - Duplicate string
├── ft_substr.c      - Extract substring
├── ft_strjoin.c     - Concatenate strings
├── ft_strtrim.c     - Remove characters from ends
├── ft_split.c       - Split string by delimiter
├── ft_strmapi.c     - Apply function to each character
├── ft_striteri.c    - Apply function with index
├── ft_strlcpy.c     - Copy string with size limit
└── ft_strlcat.c     - Concatenate with size limit

Memory Functions:
├── ft_memset.c      - Set memory to value
├── ft_bzero.c       - Set memory to zero
├── ft_memcpy.c      - Copy memory
├── ft_memmove.c     - Move memory (handles overlap)
├── ft_memchr.c      - Find byte in memory
└── ft_memcmp.c      - Compare memory

Character Functions:
├── ft_isalpha.c     - Check if alphabetic
├── ft_isdigit.c     - Check if digit
├── ft_isalnum.c     - Check if alphanumeric
├── ft_isascii.c     - Check if ASCII
├── ft_isprint.c     - Check if printable
├── ft_toupper.c     - Convert to uppercase
└── ft_tolower.c     - Convert to lowercase

Conversion Functions:
├── ft_atoi.c        - String to integer
├── ft_itoa.c        - Integer to string
└── ft_calloc.c      - Allocate and zero memory

Output Functions:
├── ft_putchar_fd.c  - Write character to file descriptor
├── ft_putstr_fd.c   - Write string to file descriptor
├── ft_putendl_fd.c  - Write string with newline
└── ft_putnbr_fd.c   - Write number to file descriptor
```

### Bonus Functions (Part 2) - Linked Lists
```
Linked List Functions:
├── ft_lstnew.c      - Create new list node
├── ft_lstadd_front.c - Add node to beginning
├── ft_lstadd_back.c  - Add node to end
├── ft_lstsize.c     - Count nodes in list
├── ft_lstlast.c     - Find last node
├── ft_lstdelone.c   - Delete single node
├── ft_lstclear.c    - Delete entire list
├── ft_lstiter.c     - Apply function to each node
└── ft_lstmap.c      - Create new list with transformed data
```

## 🚀 How to Use

### Compilation
```bash
# Compile the library
make

# Compile with bonus functions
make bonus

# Clean object files
make clean

# Clean everything
make fclean

# Recompile everything
make re
```

### Usage Example
```c
#include "libft.h"

int main(void)
{
    // String operations
    char *str = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    
    // Create a linked list
    t_list *list = ft_lstnew("First node");
    ft_lstadd_back(&list, ft_lstnew("Second node"));
    
    // Print list size
    printf("List size: %d\n", ft_lstsize(list));
    
    // Clean up
    ft_lstclear(&list, free);
    return (0);
}
```

## 🔍 Key Learning Concepts

### 1. Pointer Arithmetic
```c
char *str = "Hello";
// str[0] is equivalent to *(str + 0)
// str[1] is equivalent to *(str + 1)
```

### 2. Memory Safety
- Always check if `malloc` returns `NULL`
- Free allocated memory to prevent memory leaks
- Be careful with buffer overflows

### 3. String Handling
- C strings are null-terminated (`\0`)
- String length doesn't include the null terminator
- Always allocate space for the null terminator

### 4. Linked List Operations
```c
// Creating a new node
t_list *new_node = ft_lstnew("data");

// Adding to front (becomes new head)
ft_lstadd_front(&head, new_node);

// Adding to back (becomes new tail)
ft_lstadd_back(&head, new_node);

// Traversing the list
t_list *current = head;
while (current != NULL)
{
    // Process current->content
    current = current->next;
}
```

## 🎓 Common Pitfalls for Beginners

1. **Forgetting to check malloc return**: Always check if `malloc` returns `NULL`
2. **Buffer overflows**: Don't write beyond allocated memory
3. **Memory leaks**: Always free what you allocate
4. **Null pointer dereference**: Check pointers before using them
5. **String length confusion**: Remember null terminator
6. **Linked list cycles**: Ensure the last node points to `NULL`

## 🔧 Testing

You can test individual functions by uncommenting the test code at the bottom of each `.c` file and compiling with:

```bash
cc -Wall -Wextra -Werror ft_strlen.c -o test_strlen
./test_strlen
```

## 📖 Further Reading

- [C Programming: A Modern Approach](https://www.amazon.com/Programming-Modern-Approach-K-King/dp/0393979504)
- [Understanding and Using C Pointers](https://www.amazon.com/Understanding-Using-Pointers-Techniques-Management/dp/1449344186)
- [Data Structures and Algorithms in C](https://www.amazon.com/Data-Structures-Algorithms-C-2nd/dp/0471137726)
- [Linked List Data Structure Interview Questions](https://github.com/Devinterview-io/linked-list-data-structure-interview-questions/blob/main/README.md) - Comprehensive guide to linked list concepts and common interview questions

## 🤝 Contributing

This is an educational project. Feel free to:
- Report bugs
- Suggest improvements
- Add more examples
- Improve documentation

---

**Happy coding! 🚀**

*Remember: Understanding pointers and memory management is crucial for becoming a proficient C programmer. Take your time to practice these concepts!* 