#include "monty.h"

/**
 * push - Pushes an element into a stack
 * @x: int
 * Return: 1 on sucess, 0 on failure
 */

int push(int x)
{
	if (count < MAX_SIZE)
	{
		stack[count] = x;
		count++;
		return (1);
	}
	else
	{
		fprintf(stderr, "Stack overflow!\n");
		return (0);
	}
}

/**
 * pall - Prints all the values on the stack, starting from the top of the stack
 * Return: nothing
 */
void pall()
{
	printf("%d\n", stack[count]);
	count--;
}
