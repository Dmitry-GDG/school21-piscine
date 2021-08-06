/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:08:36 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/04 17:08:39 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = *begin_list;
	if (list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
}

/*#include <stdio.h>
*#include "ft_list.h"
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_front(t_list **begin_list, void *data);
*
*int	main(void)
*{
*	t_list	*list;
*	t_list	*temp;
*
*	list = ft_create_elem("word!");
*	printf("list->data = %s\n", (char *)list->data);
*	printf("list->next = %s\n", (char *)list->next);
*	ft_list_push_front(&list, "Hello, ");
*	temp = list;
*	while (temp)
*	{
*		printf("%s\n", (char *)temp->data);
*		temp = temp->next;
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_push_front.c ft_create_elem.c && ./a.out */
