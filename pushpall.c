#include "monty.h"

/**
 * push - Pushes an element into a stack
 * @x: int
 * Return: 1 on sucess, 0 on failure
 */

int stack[MAX_SIZE];
int count = 0;

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
		exit);
	}
}

/**
 * pall - Prints all the values on the stack, starting from the top of the stack
 * Return: nothing
 */
void pall()
{
	int i;

	if (count == 0)
	{
		exit();
	}
	for (i = count - 1; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
