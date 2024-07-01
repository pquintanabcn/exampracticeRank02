#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int sign = 1;
	int res = 0;
	int x = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		x++;
	}
	while ((str[x]) && (str[x] >= '0' && str[x] <= '9'))
		res = res * 10 + (str[x++] - '0'); 
	return(sign * res);
}
int main()
{
	printf("ft: %d\n", ft_atoi("-123456789"));
	printf("og: %d\n", atoi("-123456789"));
	return(0);
}
