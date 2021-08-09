/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:52:11 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 16:52:14 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, \
	int (*cmp)())
{
	t_list	*outp;
	void	*c;

	outp = *begin_list1;
	while ((*begin_list1)->next)
		*begin_list1 = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
	*begin_list1 = outp;
	outp = *begin_list1;
	while ((*begin_list1)->next)
	{
		if (cmp((*begin_list1)->data, (*begin_list1)->next->data) > 0)
		{
			c = (*begin_list1)->next->data;
			(*begin_list1)->next->data = (*begin_list1)->data;
			(*begin_list1)->data = c;
			*begin_list1 = outp;
		}
		else
			*begin_list1 = (*begin_list1)->next;
	}
	*begin_list1 = outp;
}

/*# include <unistd.h>
*# include <stdio.h>
*void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, \
*	int (*cmp)());
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
*	t_list	*list1;
*	t_list	*list2;
*	t_list	*tmp;
*
*	list1 = ft_create_elem("1qwe");
*	ft_list_push_back(&list1, "3asd");
*	ft_list_push_back(&list1, "4zxc");
*	ft_list_push_back(&list1, "9aqw");
*	list2 = ft_create_elem("1aqw");
*	ft_list_push_back(&list2, "2dfg");
*	ft_list_push_back(&list2, "4aaw");
*	ft_list_push_back(&list2, "8awe");
*	tmp = list1;
*	printf("begin_list1:\n");
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	tmp = list2;
*	printf("begin_list2:\n");
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	ft_sorted_list_merge(&list1, list2, ft_strcmp);
*	tmp = list1;
*	printf("begin_list1:\n");
*	while (tmp)
*	{
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	free(list1);
*	free(list2);
*	return (0);
*}
/* call it:
* gcc -Wall -Wextra -Werror ft_sorted_list_merge.c ft_create_elem.c \
* ft_list_push_back.c && ./a.out "6qwe" "5qwe" "qwe" "asd" "abc" "qae" */