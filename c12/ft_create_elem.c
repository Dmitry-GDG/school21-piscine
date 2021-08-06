/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:30:48 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/04 16:30:53 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

/*#include <stdio.h>
*#include "ft_list.h"
*#include <stdlib.h>
*t_list	*ft_create_elem(void *data);
*
*int	main(void)
*{
*	t_list	*list;
*
*	list = ft_create_elem("Hello, word!");
*	printf("list->data = %s\n", (char *)list->data);
*	printf("list->next = %s\n", (char *)list->next);
*	printf("list.data = %s\n", (char *)(*list).data);
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_create_elem.c && ./a.out */
