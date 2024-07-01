#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int x = 0;
	int y = 0;
	size_t len = 0;
	while(s[x])
	{
		while(reject[y])
		{
			if (s[x] == reject[y])
				return(len);
			y++;
		}
		y = 0;
		x++;
	}
	return(len);
}

int main()
{
	char *s = "123fd456";
	char *charset = "a";

	printf("og: %zu\n", strcspn(s, charset));
	printf("mine: %zu\n", strcspn(s, charset));
	return(0);
}
