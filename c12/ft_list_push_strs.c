/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:20:24 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/05 16:20:28 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	list = ft_create_elem (strs[0]);
	list->next = 0;
	temp = list;
	i = 1;
	while (i < size)
	{
		list = ft_create_elem (strs[i]);
		list->next = temp;
		temp = list;
		i++;
	}
	return (list);
}

/*#include <stdio.h>
*#include "ft_list.h"
*t_list	*ft_create_elem(void *data);
*t_list	*ft_list_push_strs(int size, char **strs);
*
*int		main(int argc, char **argv)
*{
*	t_list	*list;
*
*	(void) argc;
*	list = ft_list_push_strs(argc, argv);
*	while (list)
*	{
*		printf("%s ", (char *)list->data);
*		list = list->next;
*	}
*	printf("\n");
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_push_strs.c ft_create_elem.c && ./a.out \
* awe bwe cwe */