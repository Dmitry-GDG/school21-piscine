/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 06:59:55 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 06:59:59 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	outp;

	outp = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] < '0') || (str[i] > '9'))
			outp = 0;
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*int	ft_str_is_numeric(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		printf("%d\n", ft_str_is_numeric(argv[1]));
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_str_is_numeric.c && ./a.out 21344543s */
