#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return(0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return(1);
	else
		return(0);
}

int main()
{
	unsigned int si = 8;
	unsigned int no = 3;
	unsigned int zero = 0;
	unsigned int uno = 1;
	printf("si(1): %d\n", is_power_of_2(si));
	printf("no(0): %d\n", is_power_of_2(no));
	printf("no(0): %d\n", is_power_of_2(zero));
	printf("si(1): %d\n", is_power_of_2(uno));
	return(0);
}
