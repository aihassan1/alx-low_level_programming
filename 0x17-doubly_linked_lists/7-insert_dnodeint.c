#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
* insert_dnodeint_at_index - Inserts a new node at a specific index.
* @h: A pointer to a pointer to the head of the doubly linked list.
* @idx: The index at which to insert the new node.
* @n: The value to store in the new node.
*
* Return: A pointer to the new node, or NULL if it fails.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp;
dlistint_t *node;
dlistint_t *new_node;
dlistint_t *add_dn;

if (*h == NULL)
{
node = get_dnodeint_at_index(*h, (idx - 1));
if (node == NULL)
	return (NULL);

node->next = NULL;
node->prev = NULL;
node->n = n;
return (node);
}

if (idx == 0)
{
add_dn = add_dnodeint(h, n);
if (add_dn == NULL)
	return (NULL);
else
	return (add_dn);
}

node = get_dnodeint_at_index(*h, (idx - 1));
if (node == NULL)
return (NULL);


new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
free(*h);
free_dlistint(node);
return (NULL);
}

/*fill the node info*/
new_node->n = n;
new_node->prev = node;
new_node->next = node->next;

temp = new_node->next;
if (temp != NULL)
temp->prev = new_node;

node->next = new_node;

return (new_node);

}

/**
* get_dnodeint_at_index - Retrieves a node at a specific index.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to retrieve.
*
* Return: A pointer to the node at the specified index, or NULL if not found.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = NULL;
unsigned int counter = 0;

if (head == NULL)
return (NULL);

temp = head;

while (temp != NULL)
{
if (counter == index)
	return (temp);
else if (temp == NULL)
	return (NULL);

temp = temp->next;
counter++;
}
return (NULL);
}
