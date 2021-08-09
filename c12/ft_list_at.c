/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:59:44 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/07 09:59:47 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	n;
	t_list			*tmp;

	tmp = begin_list;
	n = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		n++;
	}
	if (!begin_list || n < nbr)
		return (NULL);
	tmp = begin_list;
	n = 0;
	while (n++ < nbr)
		tmp = tmp->next;
	return (tmp);
}

/*#include <stdio.h>
*t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
*
*int	main(void)
*{
*	t_list			*list;
*	t_list			*tmp;
*	unsigned int	nbr;
*
*	nbr = 2;
*	list = ft_create_elem("Ночь");
*	ft_list_push_back(&list, "улица");
*	ft_list_push_back(&list, "фонарь");
*	ft_list_push_back(&list, "аптека");
*	tmp = list;
*	int i = 0;
*	while (tmp[i].next)
*	{
*		printf("%s\n", (char *)tmp[i].data);
*		i++;
*	}
*	printf("%s\n", (char *)tmp[i].data);
* //	while (tmp)
* //	{
* //		printf("%s\n", (char *)tmp->data);
* //		tmp = tmp->next;
* //	}
*	printf("---------\n");
*	tmp = ft_list_at(list, nbr);
*	printf ("nbr = %d\n", nbr);
*	if (tmp == NULL)
*		printf("there is no %dth element of list, error\n", nbr + 1);
*	else
*		printf("%dth element of list is %s\n", nbr + 1, (char *)tmp->data);
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_at.c ft_create_elem.c \
* ft_list_push_back.c  && ./a.out */