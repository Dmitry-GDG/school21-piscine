/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:47:44 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/07 13:47:46 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
	void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}

/*# include <unistd.h>
*# include <stdio.h>
*void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
*	void *data_ref, int (*cmp)());
*t_list	*ft_create_elem(void *data);
*void	ft_list_push_back(t_list **begin_list, void *data);
*void	ft_putstr(void *data);
*
*void	ft_putstr(void *data)
*{
*	char *str = (char *)data;
*	while (*str)
*	{
*		write(1, str, 1);
*		str++;
*	}
*}
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
*		printf("%s\n", (char *)tmp->data);
*		tmp = tmp->next;
*	}
*	printf("---------\n");
*	ft_list_foreach_if(list, &ft_putstr, "фонарь", &ft_strcmp);
*	printf("\n");
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_list_foreach_if.c  ft_create_elem.c \
* ft_list_push_back.c  && ./a.out */