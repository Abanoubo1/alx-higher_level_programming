#include "lists.h"

/**
 * insert_node - Insert a number to a kind singl linke lis.
 * @head: A pointer a head of the linked list.
 * @number: The number to insert.
 * Return: if fals
 *         anothe : made new nod
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	aba = malloc(sizeof(listint_t));
	if (aba == NULL)
		return (NULL);
	aba->n = number;

	if (node == NULL || node->n >= number)
	{
		aba->next = node;
		*head = aba;
		return (aba);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	aba->next = node->next;
	node->next = aba;

	return (aba);
}
