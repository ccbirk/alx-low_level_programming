#ifndef LISTS_H_
#define LISTS_H_

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/*_putchar code*/
int _putchar(char c);

/*Write a function that prints all the elements of a listint_t list*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

/*Write a function that frees a listint_t list.*/
void free_listint(listint_t *head);

/*Write a function that frees a listint_t list.*/
void free_listint2(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*
*Write a function that returns the sum of all the data (n) of
*a listint_t linked list.
*int sum_listint(listint_t *head);
*/

/*Write a function that inserts a new node at a given position.*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
