/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_recursive.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:20 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 19:13:23 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recstrlen(char *str)
{
	if (*str)
		return (1 + ft_recstrlen(str + 1));
	else
		return (0);
}

/*#include <stdio.h>
*int	ft_recstrlen(char *str);
*
*int	main(int argc, char **argv)
*{
*	int	len;
*
*	if (argc == 2)
*	{
*		len = ft_recstrlen(argv[1]);
*		printf("len = %d\n", len);
*		return (0);
*	}
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_strlen_recursive.c && ./a.out ghty  */ 