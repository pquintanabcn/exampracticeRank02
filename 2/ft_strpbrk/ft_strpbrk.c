#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int x = 0;
	int y = 0;
	while(s1[x])
	{
		y = 0;
		while(s2[y])
		{
			if (s1[x] == s2[y])
				return 
			y++;
		}
		x++;
	}
	return(NULL);
}

int main()
{
	const char *s1 = "hola que tal";
	const char *s2 = "qos";
	printf("og: %s\n", strpbrk(s1, s2));
	printf("me: %s\n", ft_strpbrk(s1, s2));
	return(0);
}
