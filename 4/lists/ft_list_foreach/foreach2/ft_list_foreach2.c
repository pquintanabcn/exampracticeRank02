#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;
	list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

// LA IDEA:
// Declaramos un puntero de la t_list
// En ese puntero ponemos el beggining
// WHILE ese puntero exista le pasamos la funcion
// y ponemos en ese puntero el next