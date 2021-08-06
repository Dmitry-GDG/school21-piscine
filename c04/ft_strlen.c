/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 08:41:26 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/17 08:41:29 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>
*#include <string.h>
*int	ft_strlen(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*	{
*		printf("strlen:\t\t%lu\n", strlen(argv[1]));
*		printf("ft_strlen:\t%d\n", ft_strlen(argv[1]));
*	}
*	return (0);
*}*/
/*call it:
*  gcc -Wall -Wextra -Werror ft_strlen.c && ./a.out dfer  */
