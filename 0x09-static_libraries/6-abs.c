#include "main.h"

/**
 *  _abs - a function tha computes the aboslute value of an integer
 *  @ab: integer inpute
 *  Return: absolute value of ab
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
