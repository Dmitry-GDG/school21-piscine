/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:03:33 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/05 08:03:36 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*temp;

	size = 0;
	temp = begin_list;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

/*#include <stdio.h>
*#include "ft_list.h"
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_front(t_list **begin_list, void *data);
*int 	ft_list_size(t_list *begin_list);
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
*	printf("size = %d\n", ft_list_size(list));
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_size.c \
* ft_list_push_front.c ft_create_elem.c && ./a.out */