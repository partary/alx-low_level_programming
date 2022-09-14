#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @c: integer
 *description : computes integer
 *
 * Return:int
 */

int _abs(int c)
{

	if (c > 0)

	{

		c = +c;

	}

	else

	{

		c = -c;

	}

	return (c);

}
