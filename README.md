# Libft - C Library Implementation

## 📚 Overview

This project is a custom implementation of the C standard library functions, commonly known as "libft" in programming education. It includes both basic string and memory manipulation functions, as well as bonus linked list operations.

## Final score
<div align=center>
<img src="https://github.com/SimonIsCoding/utils_and_random/blob/main/ft_irc_grade.png"/>
</div>

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

### 🧸 Pointers Explained Easily!

Imagine you have a **treasure map**! 🗺️

- The **treasure map** is like a pointer - it doesn't have the treasure itself, but it tells you where to find it
- The **treasure** is like your data (a number, a word, etc.)
- The **X marks the spot** is like the memory address

#### 🎨 Super Simple Visual:
```
🏠 Your House (where you keep your toy box)
   │
   ▼ (your toy box is here!)
📦 Toy Box = Your Data (like the number 42)
   │
   ▼ (this is your "map" to find it!)
🗺️ Treasure Map = Pointer (says "go to your house, find the toy box!")

When you follow the map → you find your toy! 🎁
```

#### 🎯 Real Example:
```c
int my_toy = 42;           // 📦 This is your toy (data)
int *my_map = &my_toy;     // 🗺️ This is your map (pointer)
// &my_toy means "where is my_toy located?"
```

#### 🎪 Memory Adventure:
```
Memory City:
┌─────────────────────────────────────────────────────────┐
│  🏠 House 1: my_toy = 42 (your toy is here!)            │
│  🏠 House 2: my_map = "go to House 1!" (your map)       │
│  🏠 House 3: empty                                      │
│  🏠 House 4: empty                                      │
└─────────────────────────────────────────────────────────┘

Your map (my_map) points to House 1 where your toy (42) lives! 🏠➡️📦
```

**Remember**: A pointer is just a **friendly helper** that remembers where your stuff is! 🤗

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

#### 🎪 Linked Lists are like a Train! 🚂

Think of a linked list like a **train with wagons**:

```
🚂 Train Adventure:
┌─────────────┐     ┌─────────────┐     ┌─────────────┐     ┌─────────────┐
│  🚂 Engine  │───▶│  🚃 Wagon 1 │───▶│  🚃 Wagon 2 │───▶│  🚃 Wagon 3 │
│  Driver: A  │     │  Cargo: B   │     │  Cargo: C   │     │  Cargo: D   │
│  Next: ─────┘     │  Next: ─────┘     │  Next: ─────┘     │  Next: 🛑   │
└─────────────┘     └─────────────┘     └─────────────┘     └─────────────┘
```

**How it works:**
- Each wagon knows what's inside (cargo) 🎁
- Each wagon knows which wagon comes next (next) ➡️
- The last wagon points to nothing (🛑 = NULL)
- You can add new wagons anywhere! 🆕
- You can remove wagons without breaking the train! ✂️

#### 🎯 Real Train Example:
```c
// 🚂 Create a train with one wagon
t_list *train = ft_lstnew("Apple");  // Engine with an apple

// 🚃 Add more wagons
ft_lstadd_back(&train, ft_lstnew("Banana"));  // Add banana wagon
ft_lstadd_back(&train, ft_lstnew("Cherry"));  // Add cherry wagon

// 🎪 Now your train is: Apple → Banana → Cherry → 🛑
```

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


#### 🍽️ Memory Management Like Different Types of Restaurants! 🍕

Think of your computer's memory like **different types of restaurants**:

```
🍽️ Computer Memory linked with Food:
┌─────────────────────────────────────────────────────────┐
│  🍽️ Fast Food (Stack):                                  │
│     - Like McDonald's - quick service!                  │
│     - You order, eat, and leave                         │
│     - Staff cleans up automatically after you           │
│     - No need to worry about dishes                     │
│     - Perfect for quick meals (small data)              │
│                                                         │
│  🍽️ Your Kitchen (Heap):                                │
│     - You prepare what you need (malloc)                │
│     - You decide how much to eat                        │
│     - YOU MUST clean your own plate (free)!             │
│     - If you forget to clean → plates pile up! 🗑️       │
│                                                         │
│  🍽️ Food Vending Machine (Data):                        │
│     - Always open, always available                     │
│     - Global variables, constants                       │
│     - Stays the same throughout your stay               │
│                                                         │
│  🍽️ Recipe Book (Code):                                 │
│     - Like a cookbook with instructions                 │
│     - Tells the restaurant what to cook                 │
│     - Your program instructions                         │
└─────────────────────────────────────────────────────────┘
```

#### 🎯 Memory Adventure Example:
```c
// 🍽️ Fast Food (Stack - automatic cleanup)
int my_number = 42;        // Order, eat, leave - staff cleans up!

// 🍽️ Self-Service Buffet (Heap - manual cleanup)
int *big_array = malloc(100 * sizeof(int));  // Take a big plate
// ... use the plate ...
free(big_array);          // Clean your own plate!
```

**Important**: 
- 🍽️ **Stack** = Fast food (automatic cleanup)
- 🍽️ **Heap** = your kitchen (YOU must clean up!)
- 🧹 Always clean your buffet plate (free) or dishes pile up! 🗑️
- 📍 **Both restaurants exist at the same time** - no hierarchy!

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