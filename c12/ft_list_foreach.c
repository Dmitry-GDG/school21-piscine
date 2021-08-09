/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:54:05 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/07 12:54:07 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		(*f)(tmp->data);
		tmp = tmp->next;
	}
	f((void *)tmp->data);
}

/*# include <unistd.h>
*# include <stdio.h>
*void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
*void	ft_putstr(void *data);
*
*void	ft_putstr(void *data)
*{
*	char *str = (char *)data;
*	while (*str)
*	{
*		write(1, str, 1);
*		str++;
*	}
*}
*
*int	main(void)
*{
*	t_list			*list;
*	t_list			*tmp;
*
*	list = ft_create_elem("Ночь");
*	ft_list_push_back(&list, "улица");
*	ft_list_push_back(&list, "фонарь");
*	ft_list_push_back(&list, "аптека");
*	tmp = list;
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	ft_list_foreach(list, &ft_putstr);
*	printf("\n");
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_foreach.c ft_create_elem.c \
* ft_list_push_back.c  && ./a.out */