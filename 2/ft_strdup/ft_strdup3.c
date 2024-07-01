#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int len = 0;
	int x = 0;
	while (src[len])
		len++;
	len += 1;
	char *copy = (char *)malloc(sizeof(char) * len);
	while (copy[x])
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	if (!copy)
		return(NULL);
	return (copy);
}

int main()
{
	char *str = "hola";
	printf("normal: %s\n",str);
	printf("strdup: %s\n",strdup(str));
	printf("ft_strdup: %s\n",str);
	return(0);
}
