/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:43:59 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/05 19:44:04 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;
	{
		tmp = begin_list;
		while (tmp->next)
		{
			tmp2 = tmp->next;
			tmp->next = NULL;
			free_fct(tmp->data);
			tmp->data = NULL;
			free(tmp);
			tmp = tmp2;
		}
		free_fct(tmp->data);
		tmp->data = NULL;
		free(tmp);
	}
}

/*#include <stdio.h>
*#include "ft_list.h"
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_front(t_list **begin_list, void *data);
*void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
*
*void	free_fct(void *data)
*{
*	free(data);
*	data = NULL;
*}
*
*int	main(void)
*{
*	t_list	*list;
*	t_list	*temp;
*	int		i;
*
*	char *tmp = "аптека";
*	char * a = (char *)malloc(10);
*	i = 0;
*	while (tmp[i])
*	{
*		a[i] = tmp[i];
*		i++;
*	}
*	tmp = "фонарь, ";
*	char * b = (char *)malloc(10);
*	i = 0;
*	while (tmp[i])
*	{
*		b[i] = tmp[i];
*		i++;
*	}
*	tmp = "улица, ";
*	char * c = (char *)malloc(10);
*	i = 0;
*	while (tmp[i])
*	{
*		c[i] = tmp[i];
*		i++;
*	}
*	tmp = "Ночь, ";
*	char * d = (char *)malloc(10);
*	i = 0;
*	while (tmp[i])
*	{
*		d[i] = tmp[i];
*		i++;
*	}
*	list = ft_create_elem(a);
*	ft_list_push_front(&list, b);
*	ft_list_push_front(&list, c);
*	ft_list_push_front(&list, d);
*	temp = list;
*	while (temp)
*	{
*		printf("at address %p\t is plased %s\n", &temp->data, (char *)temp->data);
*		temp = temp->next;
*	}
*	printf("----------\n");
*	ft_list_clear(list, free_fct);
*	printf("all links and data from the list had been removed\n \
*		и вы не можете освободить память повторно: \n");
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_clear.c ft_list_push_front.c \
 ft_create_elem.c && ./a.out */