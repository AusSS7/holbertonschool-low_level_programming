/**
* op_add - compute som of 2 integers
* @a: first integer to add
* @b: second integer to add
* Return: sum of a and b
*/

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
* op_sub - compute subtraction of 2 integers
* @a: first integer to subtract with b
* @b: second integer to subtract from a
* Return: difference of a and b
*/

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
* op_mul - compute multiplication of 2 integers
* @a: first integer to multiply with b
* @b: second integer to multiply with a
* Return: multiplication result of a and b
*/

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
* op_div - compute quotient of 2 integers
* @a: first integer to divide by b
* @b: second integer to divide a by
* Return: quotient of a and b
*/

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
* op_mod - compute remainder of 2 integers
* @a: first integer to mod with b
* @b: second integer to mod a by
* Return: remainder of a and b
*/


int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
