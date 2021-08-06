/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:46:26 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/05 10:46:28 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		return (temp);
	}
	return (0);
}

/*#include <stdio.h>
*#include "ft_list.h"
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_front(t_list **begin_list, void *data);
*t_list	*ft_list_last(t_list *begin_list);
*
*int	main(void)
*{
*	t_list	*list;
*	t_list	*temp;
*
*	list = ft_create_elem("аптека");
*	ft_list_push_front(&list, "фонарь, ");
*	ft_list_push_front(&list, "улица, ");
*	ft_list_push_front(&list, "Ночь, ");
*	temp = list;
*	while (temp)
*	{
*		printf("%s\n", (char *)temp->data);
*		temp = temp->next;
*	}
*	temp = ft_list_last(list);
*	printf("last element of the list = %s\n", (char *)temp->data);
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_last.c ft_list_push_front.c \
* ft_create_elem.c && ./a.out */