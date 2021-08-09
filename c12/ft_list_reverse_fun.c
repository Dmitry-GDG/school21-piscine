/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:02:49 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 16:02:54 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	i;
	unsigned int	size;
	t_list			*temp;
	void			*c;

	temp = begin_list;
	size = 0;
	while (temp->next)
	{
		temp = temp->next;
		size++;
	}
	i = 0;
	while (i <= size / 2)
	{
		c = begin_list[size - i].data;
		begin_list[size - i].data = begin_list[i].data;
		begin_list[i].data = c;
		i++;
	}
}

/*#include <stdio.h>
*#include "ft_list.h"
*void	ft_list_reverse_fun(t_list *begin_list);
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
*
*int	main(int argc, char **argv)
*{
*	t_list	*list = NULL;
*	int		i;
*	t_list	*tmp;
*
*	if (argc > 2)
*	{
*		list = ft_create_elem(argv[1]);
*		i = 2;
*		while (i < argc)
*		{
*			ft_list_push_back (&list, argv[i]);
*			i++;
*		}
*	}
*	tmp = list;
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("-------\n");
*	ft_list_reverse_fun(list);
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
* gcc -Wall -Wextra -Werror ft_list_reverse_fun.c ft_create_elem.c \
* ft_list_push_back.c && ./a.out "6qwe" "5qwe" "qwe" "asd" "abc" "qae" */