#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
		j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
/*
size_t	ft_strcspn(const char *s, const char *reject)
{
	char *keep;
	int x = 0;
	int aux1 = 0;
	int aux2 = 0;
	while(s[aux1])
	{
		aux2 = 0;
		while(reject[aux2])
		{
			if (s[aux1] != reject[aux2])
				keep[x++] = s[aux1];
			aux2++;
		}
		aux1++;
	}
	return(x - 1);
}
*/

int main()
{
	char *s = "412945346";
	char *charset = "34";
	printf("%zu\n", ft_strcspn(s, charset));
	printf("%zu\n", strcspn(s, charset));
	return(0);
}

// 'ft_strcspn' calculates the length of the initial portion of 's1r' consisting of chars NOT contained in 's2r'.
