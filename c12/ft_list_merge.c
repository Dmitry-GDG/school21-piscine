/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:59:29 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 13:59:33 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*outp;

	outp = *begin_list1;
	while ((*begin_list1)->next)
		*begin_list1 = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
	*begin_list1 = outp;
}

/*# include <unistd.h>
*# include <stdio.h>
*void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
*
*int	main(void)
*{
*	t_list	*list1;
*	t_list	*list2;
*	t_list	*tmp;
*
*	list1 = ft_create_elem("Ночь");
*	ft_list_push_back(&list1, "улица");
*	ft_list_push_back(&list1, "фонарь");
*	ft_list_push_back(&list1, "аптека");
*	list2 = ft_create_elem("Бессмысленный");
*	ft_list_push_back(&list2, "и");
*	ft_list_push_back(&list2, "тусклый");
*	ft_list_push_back(&list2, "свет");
*	tmp = list1;
*	printf("begin_list1:\n");
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	tmp = list2;
*	printf("begin_list2:\n");
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	ft_list_merge(&list1, list2);
*	tmp = list1;
*	printf("begin_list1:\n");
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	free(list1);
*	free(list2);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_merge.c ft_create_elem.c \
* ft_list_push_back.c && ./a.out */