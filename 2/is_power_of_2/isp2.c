#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return(0);
	else if(n == 1)
		return(1);
	else if(n % 2 == 0)
		return(1);
	else if(n % 2 != 0)
		return(0);
	else
		return(0);
}

int main()
{
	unsigned int si = 1024;
	unsigned int no = 3;
	printf("is: %d\n", is_power_of_2(si));
	printf("not: %d\n", is_power_of_2(no));
	unsigned int uno = 1;
	unsigned int zero = 0;
	printf("is: %d\n", is_power_of_2(uno));
	printf("not: %d\n", is_power_of_2(zero));
	return(0);
}

// no se si esta bien el is_power_of_two23.c es mas correcto
