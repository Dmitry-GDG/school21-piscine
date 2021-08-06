/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:03:01 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 11:03:04 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combb(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (i != '7')
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			if (j > i)
			{
				k = '2';
				while (k <= '9')
				{
					if (k > j)
						ft_print_combb(i, j, k);
					k++;
				}
			}
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
}

/*void	ft_print_comb(void);
*
*int	main(void)
*{
*	ft_print_comb();
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_print_comb.c && ./a.out */
