/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:20 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 19:13:23 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*#include <stdio.h>
*int	ft_strlen(char *str);
*
*int	main(int argc, char **argv)
*{
*	int	len;
*
*	if (argc == 2)
*	{
*		len = ft_strlen(argv[1]);
*		printf("len = %d\n", len);
*		return (0);
*	}
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_strlen.c && ./a.out ght  */ 