#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t auxs = 0;
	size_t auxr = 0;
	while (s[auxs])
	{
		auxr = 0;
		while (reject[auxr])
		{
			if (s[auxs] == reject[auxr])
				return(auxs);
			else
				auxr++;
		}
		auxs++;
	}
	return(auxs);
}

int main()
{
	char *s = "abcdef";
	char *charset = "cs";
	printf("%zu\n", ft_strcspn(s, charset));
	printf("%lu\n", strcspn(s, charset));
	return(0);
}
