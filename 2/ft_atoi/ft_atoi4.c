#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int x = 0;
	int sign = 1;
	int res = 0;
	if (str[x] == '+' || str[x] == '-')
	{
		if(str[x] == '-')
			sign  = -1;
		x++;
	}
	while(str[x])
	{
		res = res * 10 + str[x] - '0';
		x++;
	}
	return(res * sign);
}

int main()
{
	const char *str = "+1";
	printf("og: %d\nme: %d\n", atoi(str), ft_atoi(str));
	return(0);
}
