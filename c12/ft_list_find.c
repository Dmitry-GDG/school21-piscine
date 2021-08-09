/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:36:55 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/07 14:36:58 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

/*# include <unistd.h>
*# include <stdio.h>
*t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
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
*		printf("%s\tis placed at address %p\n", (char *)tmp->data, &tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	tmp = ft_list_find(list, "фонарь", &ft_strcmp);
*	printf("%s\tis placed at address %p\n", (char *)tmp->data, &tmp->data);
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_find.c ft_create_elem.c \
* ft_list_push_back.c && ./a.out */