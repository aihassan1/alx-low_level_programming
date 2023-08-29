#include "lists.h"
#include <stdlib.h>

/**
* sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The sum of the numeric data, ignoring non-numeric values.
*/

int sum_listint(listint_t *head)
{
int num = 0, sum = 0;
listint_t *ptr = head;
if (head == NULL)
return (0);

while (ptr != NULL)
{
num = ptr->n;
sum = sum + num;
ptr = ptr->next;
}
return (sum);
}
