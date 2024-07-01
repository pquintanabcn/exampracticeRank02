#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
	int x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	return(s1[x] - s2[x]);
}

int main()
{
	char *s1 = "hola que tal";
	char *s2 = "holp";
	printf("og: %d\n", strcmp(s1, s2));
	printf("me: %d\n", ft_strcmp(s1, s2));
	return(0);
}
