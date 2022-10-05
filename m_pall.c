#include "monty.h"

/**
 * m_pall - print all values on `stack' starting from the top
 * @stack: double pointer to head of stack
 * @line_number: line number being executed from script file
 *
 * Return: void
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head_of_stack;

	(void)(line_number);

	head_of_stack = *stack;
	while (head_of_stack != NULL)
	{
		printf("%d\n", head_of_stack->n);
		head_of_stack = head_of_stack->next;
		if (head_of_stack == *stack)
		{
			return;
		}
	}
}
