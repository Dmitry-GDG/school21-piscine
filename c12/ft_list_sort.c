/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:23:50 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 14:23:54 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*outp;
	void	*c;

	outp = *begin_list;
	while ((*begin_list)->next)
	{
		if (cmp((*begin_list)->data, (*begin_list)->next->data) > 0)
		{
			c = (*begin_list)->next->data;
			(*begin_list)->next->data = (*begin_list)->data;
			(*begin_list)->data = c;
			*begin_list = outp;
		}
		else
			*begin_list = (*begin_list)->next;
	}
	*begin_list = outp;
}

/*#include <stdio.h>
*#include "ft_list.h"
*void	ft_list_sort(t_list **begin_list, int (*cmp)());
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
*	ft_list_sort(&list, &ft_strcmp);
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
* gcc -Wall -Wextra -Werror ft_list_sort.c ft_create_elem.c ft_list_push_back.c \
* && ./a.out "6qwe" "5qwe" "qwe" "asd" "abc" "qae" */