#include <unistd.h>

void	ft_writenum(int x)
{
	char num[10] = "0123456789";
	if (x > 9)
		ft_writenum(x / 10);
	write (1, &num[x % 10], 1);
}

int main(void)
{
	int x = 1;
	while(x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (x % 3 == 0)
			write(1, "fizz", 4);
		else if (x % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_writenum(x);
		write(1, "\n", 1);
		x++;
	}
	return(0);
}
