#include "monty.h"
#include "globals.h"

void mod(stack_t **stack, unsigned int line_number) 
{
    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n %= (*stack)->n;
    pop(stack, line_number); /*  Remove the top element */
}
        
