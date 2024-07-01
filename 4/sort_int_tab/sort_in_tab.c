#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int counter = 0; // unsigned para poder comparar
	int temp = 0;
	while (counter < size)
	{
		if (tab[counter] > tab[counter + 1])
		{
			temp = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = temp;
			counter = 0;
		}
		else
			counter++;
	}
}

int main(void)
{
    int tab[10];
    int i = 0;

    tab[0] = 9;
    tab[1] = 2;
    tab[2] = 4;
    tab[3] = 3;
    tab[4] = 8;
    tab[5] = 0;
    tab[6] = 1;
    tab[7] = 7;
    tab[8] = 5;
    tab[9] = 6;
	while (i <= 9)
        printf("%d ", tab[i++]);
	printf("\n\n");
    i = 0;
	sort_int_tab(tab, 9);
    while (i <= 9)
        printf("%d ", tab[i++]);
	printf("\n");
    return (0);
}
//LA IDEA:
//Tener un contador para ir checkeando si todos los numeros
//son mas pequeños que el anterior
//Tener un temporal para hacer el swap
//Si el numero es mas grande que el siguiente se hace swap
//Y reiniciamos el contador sino sumamos el contador 