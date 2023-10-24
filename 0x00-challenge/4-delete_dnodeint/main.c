#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * initialize_list - initialize the list with nodes
 * @head: double pointer to the head of the list
 */
void initialize_list(dlistint_t **head)
{
	add_dnodeint_end(head, 0);
	add_dnodeint_end(head, 1);
	add_dnodeint_end(head, 2);
	add_dnodeint_end(head, 3);
	add_dnodeint_end(head, 4);
	add_dnodeint_end(head, 98);
	add_dnodeint_end(head, 402);
	add_dnodeint_end(head, 1024);
	print_dlistint(*head);
	printf("-----------------\n");
}

/**
 * perform_deletions - delete nodes from the list
 * @head: double pointer to the head of the list
 */
void perform_deletions(dlistint_t **head)
{
	int i;

	delete_dnodeint_at_index(head, 5);
	print_dlistint(*head);
	printf("-----------------\n");

	for (i = 0; i < 14; i++)
	{
		delete_dnodeint_at_index(head, 0);
		print_dlistint(*head);
		printf("-----------------\n");
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head = NULL;

	initialize_list(&head);
	perform_deletions(&head);
	free_dlistint(head);
	return (0);
}
