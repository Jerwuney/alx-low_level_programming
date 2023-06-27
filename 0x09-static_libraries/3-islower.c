#include "main.h"

/**
*_islower - checks if an alphabet is lowercase
*@c: the input
*Return: Always 0
*/

int _islower(int c)
{

	if (c >= 'a' && c  <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
