#include "monty.h"

/**
 * monty_add - adds the top two value of a stack_t linked list
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line number of a monty bytecodes file
 *
 * Description: The result is stored in the second value node
 * 	from the top and the top value is removed
 */
void monty_add(stack_t **stack, unsigned int line_number)
{

