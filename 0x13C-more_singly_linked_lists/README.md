README.md  content


Task 0: Print list
For this task, I will write a function that prints all the elements of a listint_t list.
Using prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf
The command can be found in the executable file: 0-print_listint.c

Task 1: List length
For this task, i will write a function that returns the number of elements in a linked listint_t list.
Using Prototype: size_t listint_len(const listint_t *h);
The command can be found in the executable file:1-listint_len.c




Task 2: Add node

For this task, I will write a function that adds a new node at the beginning of a listint_t list.
Using Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
The command can be found in the executable file: 2-add_nodeint.c

Task 3: Add node at the end
For this task, I will write a function that adds a new node at the end of a listint_t list.
Using Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
The command can be found in the executable file: 3-add_nodeint_end.c


Task 4: Free list
For this task, I will write a function that frees a listint_t list.
Using Prototype: void free_listint(listint_t *head);
The command can be found in the executable file: 4-free_listint.c

Task 5: Free 
For this task, I will write a function that frees a listint_t list.
Using Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL
The command can be found in the executable file: 5-free_listint2.c

Task 6: Pop
For this task, I will write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Using Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0
The command can be found in the executable file: 6-pop_listint.c

Task 7: Get node at index
For this task, I will write a function that returns the nth node of a listint_t linked list.
Using Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
The command can be found in the executable file: 7-get_nodeint.c

Task 8: . Sum list
For this task, I will write a functionthat returns the sum of all the data (n) of a listint_t linked list.
Using Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0
The command can be found in the executable file: 8-sum_listint.c

Task 9: Insert
For this task, I will write a function  that inserts a new node at a given position.
Using Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
The command can be found in the executable file: 9-insert_nodeint.c

Task Delete at index 
For this task, I will write a function that deletes the node at index index of a listint_t linked list.
Using Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
The command can be found in the executable file: 10-delete_nodeint.c

