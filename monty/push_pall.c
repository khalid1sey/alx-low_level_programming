
#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the line number of the opcode being executed
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *str = strtok(NULL, " \n");
	int num;

	if (str == NULL || !isdigit(*str))
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(str);
	push_stack(stack, num);
}

/**
 * pall - prints all the values on the stack, starting from the top of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the line number of the opcode being executed
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	(void)line_number;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}

/**
 * push_stack - pushes an element to the stack
 * @stack: double pointer to the head of the stack
 * @num: the integer to be pushed
 */
void push_stack(stack_t **stack, int num)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}