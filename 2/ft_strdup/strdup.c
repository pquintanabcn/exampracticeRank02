#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int x = 0;
	int len = 0;
	while(src[len])
		len++;
	char *copy = (char *)malloc(sizeof(char) * len + 1);
	if (!copy)
		return(NULL);
	while(src[x])
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return(copy);
}

int main()
{
	char *s = "holapatricia";
	//int len = 12;
	printf("og: %s\n", strdup(s));
	printf("mine: %s\n", ft_strdup(s));
	return(0);
}
