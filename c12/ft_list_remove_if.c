/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:59:46 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/07 14:59:49 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	my_free_data_begin(t_list **begin_list, void (*free_fct)(void *))
{
	t_list	*tmp3;

	if ((*begin_list)->next)
	{
		tmp3 = (*begin_list)->next;
		free_fct((*begin_list)->data);
		(*begin_list)->data = NULL;
		free((*begin_list));
		(*begin_list) = tmp3;
	}
	else
	{
		(*begin_list)->next = NULL;
		free_fct((*begin_list)->data);
		(*begin_list)->data = NULL;
		free((*begin_list));
	}
}

void	my_free_data(t_list **begin_list, t_list *tmp_prev, \
	void (*free_fct)(void *))
{
	t_list	*tmp3;

	if ((*begin_list)->next)
	{
		tmp3 = (*begin_list)->next;
		free_fct((*begin_list)->data);
		(*begin_list)->data = NULL;
		free((*begin_list));
		(*begin_list) = tmp3;
		tmp_prev->next = (*begin_list);
	}
	else
	{
		(*begin_list)->next = NULL;
		free_fct((*begin_list)->data);
		free((*begin_list));
		tmp_prev->next = NULL;
	}	
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, \
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*outp;
	t_list	*tmp_prev;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while ((*cmp)((*begin_list)->data, data_ref) == 0)
		my_free_data_begin(begin_list, free_fct);
	outp = *begin_list;
	while (*begin_list)
	{
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
			my_free_data(begin_list, tmp_prev, free_fct);
		else
		{
			if ((*begin_list)->next)
			{
				tmp_prev = *begin_list;
				(*begin_list) = (*begin_list)->next;
			}
			else
				break ;
		}
	}
	*begin_list = outp;
}

/*# include <unistd.h>
*# include <stdio.h>
*void	ft_list_remove_if(t_list **begin_list, void *data_ref, \
*	int (*cmp)(), void (*free_fct)(void *));
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_front(t_list **begin_list, void *data);
*
*int	ft_strcmp(char *s1, char *s2)
*{
*	unsigned int	i;
*
*	i = 0;
*	while (s1[i] && s2[i] && (s1[i] == s2[i]))
*		i++;
*	return (s1[i] - s2[i]);
*}
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
*	t_list	*tmp;
*	int		i;
*
*	char *str = "аптека";
*	char * a = (char *)malloc(10);
*	i = 0;
*	while (str[i])
*	{
*		a[i] = str[i];
*		i++;
*	}
*	str = "фонарь, ";
*	char * b = (char *)malloc(10);
*	i = 0;
*	while (str[i])
*	{
*		b[i] = str[i];
*		i++;
*	}
*	str = "улица, ";
*	char * c = (char *)malloc(10);
*	i = 0;
*	while (str[i])
*	{
*		c[i] = str[i];
*		i++;
*	}
*	str = "Ночь, ";
*	char * d = (char *)malloc(10);
*	i = 0;
*	while (str[i])
*	{
*		d[i] = str[i];
*		i++;
*	}
*	list = ft_create_elem(a);
*	ft_list_push_front(&list, b);
*	ft_list_push_front(&list, c);
*	ft_list_push_front(&list, d);
*	tmp = list;
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	ft_list_remove_if(&list, "фонарь, ", &ft_strcmp, &free_fct);
*	tmp = list;
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_remove_if.c ft_create_elem.c \
* ft_list_push_front.c && ./a.out */