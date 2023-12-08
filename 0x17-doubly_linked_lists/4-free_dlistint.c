#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free a doubly linked list
  * @head: The head of doubly linked list
  *
  * Return: This function does not return anything
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
