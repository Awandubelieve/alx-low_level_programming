#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - Adds a new node at the beginning of the list_t lists
 * @head: Pointers to the first elements of the lists
 * @str: String to set in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 * Return: Length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
