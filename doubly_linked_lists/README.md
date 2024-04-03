### Doubly Linked Lists

A doubly linked list is a type of linked list where each node contains a data element and two pointers, one pointing to the previous node and the other pointing to the next node. This structure allows traversal in both forward and backward directions.

#### How to use doubly linked lists

Doubly linked lists are useful in scenarios where efficient insertion and deletion operations are required, especially when accessing elements in both forward and backward directions.

Here's how you can use doubly linked lists:

1. **Initialization**: Create a pointer to the head of the list and initialize it to `NULL`.

2. **Insertion**: 
   - To insert a node at the beginning of the list, use the `add_dnodeint` function.
   - To insert a node at the end of the list, use the `add_dnodeint_end` function.
   - To insert a node at a specific index, use the `insert_dnodeint_at_index` function.

3. **Deletion**:
   - To delete a node at a specific index, use the `delete_dnodeint_at_index` function.

4. **Traversal**: 
   - To print all elements of the list, use the `print_dlistint` function.
   - To get the length of the list, use the `dlistint_len` function.

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- The prototypes of all your functions should be included in your header file called lists.h
- All your header files should be include guarded


### Tasks

1. **Print list**: Write a function that prints all the elements of a dlistint_t list.
2. **List length**: Write a function that returns the number of elements in a linked dlistint_t list.
3. **Add node**: Write a function that adds a new node at the beginning of a dlistint_t list.
4. **Add node at the end**: Write a function that adds a new node at the end of a dlistint_t list.
5. **Free list**: Write a function that frees a dlistint_t list.
6. **Get node at index**: Write a function that returns the nth node of a dlistint_t linked list.
7. **Sum list**: Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
8. **Insert at index**: Write a function that inserts a new node at a given position.
9. **Delete at index**: Write a function that deletes the node at index index of a dlistint_t linked list.

Each task has a corresponding main file for testing the implementation.