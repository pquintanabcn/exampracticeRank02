
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

// int main()
// {
// 	int a = 5;
// 	int b = 10;
// 	printf("a: %d || b: %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("a: %d || b: %d\n", a, b);
// }