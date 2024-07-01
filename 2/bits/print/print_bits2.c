#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int index = 128;
	while (index > 0)
	{
		if (octet >= index)
		{
			write(1, "1", 1);
			octet %= index;
			index /= 2;
		}
		else
		{
			write(1, "0", 1);
			index /= 2;
		}
	}
}
/*
int main()
{
	unsigned char octet = 2;
	print_bits(octet);
	return(0);
}
*/
