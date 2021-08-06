/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:29:00 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/03 18:29:02 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	my_print_result(int int1, char sign, int int2)
{
	if (sign == '*')
		ft_putnbr (int1 * int2);
	if (sign == '/')
	{
		if (sign == '/' && int2 == 0)
			write (1, "Stop : division by zero", 23);
		else
			ft_putnbr (int1 / int2);
	}
	if (sign == '+')
		ft_putnbr (int1 + int2);
	if (sign == '-')
		ft_putnbr (int1 - int2);
	if (sign == '%')
	{
		if (sign == '%' && int2 == 0)
			write (1, "Stop : modulo by zero", 21);
		else
			ft_putnbr (int1 % int2);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		int1;
	int		int2;

	if (argc == 4)
	{
		if (argv[2][1] != '\0')
			write(1, "0\n", 2);
		else if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' \
			&& argv[2][0] != '/' && argv[2][0] != '%')
			write(1, "0\n", 2);
		else
		{
			int1 = ft_atoi(argv[1]);
			int2 = ft_atoi(argv[3]);
			my_print_result(int1, argv[2][0], int2);
		}
	}
	return (0);
}

/* call it:
* make
* ./do-op 42 "+" 21
* ./do-op
* ./do-op 1 + 1
* ./do-op 42amis - --+-20toto12
* ./do-op 1 p 1
* ./do-op 1 + toto3
* ./do-op toto3 + 4
* /do-op foo plus bar
* ./do-op 25 / 0
* ./do-op 25 % 0
* ./do-op 1 "+*" 1 */
