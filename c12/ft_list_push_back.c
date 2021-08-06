/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:10:25 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/05 12:10:28 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;

	temp = *begin_list;
	if (temp == NULL)
		*begin_list = ft_create_elem (data);
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ft_create_elem (data);
	}
}

/*1#include <stdio.h>
*#include "ft_list.h"
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
*
*int		main(void)
*{
*	t_list	t1, t2, t3, *begin;
*
*	begin = &t1;
*	t1.next = &t2;
*	t2.next = &t3;
*	t3.next = 0;
*
*	t1.data = "Ночь";
*	t2.data = ", улица";
*	t3.data = ", фонарь";
*
*	while (begin)
*	{
*		printf("%s", (char *)begin->data);
*		begin = begin->next;
*	}
*	printf("\n");
*
*	begin = &t1;
*	ft_list_push_back(&begin, ", аптека");
*	while (begin)
*	{
*		printf("%s", (char *)begin->data);
*		begin = begin->next;
*	}
*	printf("\n");
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_push_back.c ft_create_elem.c && ./a.out */