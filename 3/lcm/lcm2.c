#include "stdio.h"

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n = 0;
	if (a == 0 || b == 0)
		return(n);
	if(a > b)
		n = a;
	else
		n = b;
// empezamos con el numero mas grande porque sera el numero mas pequeño posible que sea multiple de los dos
	while(1)
	{
		if (n % a == 0 && n % b == 0)
			return(n);
		++n;
	}
	return(n);
}

int main()
{
	unsigned int a = 6;
	unsigned int b = 8; // solo positivos
	printf("lcm:  %d\n", lcm(a, b));
	return(0);
}
