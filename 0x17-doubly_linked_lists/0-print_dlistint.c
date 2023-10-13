#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: A pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp;
int nodes_counter = 0;
temp = h;

if (h == NULL)
{
printf("Empty node");
return (EXIT_FAILURE);
}

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
nodes_counter++;
}

return (nodes_counter);
}
