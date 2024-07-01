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
	int si = 8;
	int no = 3;
	int zero = 0;
	int uno = 1;
	printf("si es 1: %d\n", is_power_of_2(si));
	printf("no es 0: %d\n", is_power_of_2(no));
	printf("no es 0: %d\n", is_power_of_2(zero));
	printf("si es 1: %d\n", is_power_of_2(uno));
}
