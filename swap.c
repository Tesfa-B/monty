#include "monty.h"
#include "globals.h"

void swap(stack_t **stack, unsigned int line_number)
{
	int temp = (*stack)->n;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	       	exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
