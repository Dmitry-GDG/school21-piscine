/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:29:13 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 12:29:19 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2b(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	else
		write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			while (c <= '9' && b < '9')
			{
				d = b;
				while (d++ <= '8')
					ft_print_comb2b(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*void	ft_print_comb2(void);
*
*int	main(void)
*{
*	ft_print_comb2();
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_print_comb2.c && ./a.out */
