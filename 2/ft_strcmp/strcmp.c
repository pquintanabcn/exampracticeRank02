#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x = 0;
	while (s1[x] && s2[x] && (s1[x] == s2[x]))
		x++;
	return(s1[x] - s2[x]);
}

int main()
{
	char *s1 = "123s456";
	char *s2 = "123s567";

	printf("og: %d\n", strcmp(s1, s2));
	printf("mine: %d\n", ft_strcmp(s1, s2));
	
	return(0);
}
