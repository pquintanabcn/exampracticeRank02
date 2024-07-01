// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int aux = 0;
	while (s2[aux++])
		s2[aux] = s1[aux];
	s2[aux] = '\0';
	return(s2);
}

// int main()
// {
// 	char s1[] = "que tal";
// 	char s2[] = "bien";
// 	printf("%s\n", strcpy(s1, s2));
// 	printf("%s\n", ft_strcpy(s1, s2));
// }
