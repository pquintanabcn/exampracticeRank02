#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n = 0;
	if (a == 0 || b == 0)
		return(n);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return(n);
		++n;
	}
	return(n);
}

int main()
{
	unsigned int n1 = 6;
	unsigned int n2 = 8;
	printf("24-> %d\n", lcm(n1, n2));
	return(0);
}
