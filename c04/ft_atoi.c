/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:25:30 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/17 10:25:34 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	outp;

	i = 0;
	minus = 1;
	outp = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		outp = outp * 10 + str[i] - '0';
		i++;
	}
	return (outp * minus);
}

/*#include <stdio.h>
*int	ft_atoi(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		printf ("%d\n", ft_atoi(argv[1]));
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_atoi.c && ./a.out " ---+--+1234ab567"  */
