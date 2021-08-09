/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 11:31:55 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/07 11:31:58 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp1;
	t_list	*tmp_outp;
	t_list	*tmp3;

	tmp1 = *begin_list;
	tmp_outp = tmp1;
	tmp1 = tmp1->next;
	tmp_outp->next = NULL;
	while (tmp1->next)
	{
		tmp3 = tmp_outp;
		tmp_outp = tmp1;
		tmp1 = tmp1->next;
		tmp_outp->next = tmp3;
	}
	tmp3 = tmp_outp;
	tmp_outp = tmp1;
	tmp_outp->next = tmp3;
	*begin_list = tmp_outp;
}

/*# include <stdio.h>
*void	ft_list_reverse(t_list **begin_list);
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
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
*	ft_list_reverse(&list);
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
* gcc -Wall -Wextra -Werror ft_list_reverse.c ft_create_elem.c \
* ft_list_push_back.c  && ./a.out */