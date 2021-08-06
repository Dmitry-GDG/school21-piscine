/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:13:56 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 22:13:59 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	my_tail5(int qty, char **str)
{
	int	i;

	i = 1;
	while (i < qty)
	{
		ft_putstr("==> ");
		ft_putstr(str[i]);
		ft_putstr(" <==\n");
		ft_display_file3(str[i]);
		if (i < qty - 1)
			ft_putchar('\n');
		i++;
	}
	return (0);
}

int	my_tail4(int qty, char **str, int qty_outp, int size_outp)
{
	int	i;
	int	plus;

	plus = my_minus(str[2]);
	i = 3;
	while (i < qty)
	{
		if (qty > 4)
		{
			ft_putstr("==> ");
			ft_putstr(str[i]);
			ft_putstr(" <==\n");
		}
		ft_display_file4(plus, qty_outp, str[i], size_outp);
		if (i < qty - 1)
			ft_putchar('\n');
		i++;
	}
	return (errno);
}

int	my_tail3(int qty, char **str, int size_outp)
{
	int	qty_outp;
	int	plus;

	plus = my_minus(str[2]);
	errno = 0;
	qty_outp = ft_atoi2(str[2]);
	if (errno != 0)
	{
		my_print_mistake3(str[2]);
		return (errno);
	}			
	if (qty == 3)
		return (ft_stdin2(plus, qty_outp, size_outp));
	else
		return (my_tail4(qty, str, qty_outp, size_outp));
	return (0);
}

int	my_tail2(char **str)
{
	if (str[1][0] == '-' && str[1][1] == 'c' && str[1][2] == '\0')
	{
		ft_putstr("ft_tail: option requires an argument -- c\n\
usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
		return (1);
	}
	else
		return (ft_display_file3(str[1]));
}

int	ft_tail(int qty, char **str)
{
	int		size_outp;

	size_outp = 1;
	if (qty == 1)
	{
		ft_stdin();
		return (errno);
	}
	else if (qty == 2)
		return (my_tail2(str));
	else if (str[1][0] == '-' && str[1][1] == 'c' && str[1][2] == '\0')
		return (my_tail3(qty, str, size_outp));
	else
		return (my_tail5(qty, str));
	return (0);
}
