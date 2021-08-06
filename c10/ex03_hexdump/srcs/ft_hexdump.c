/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:47:13 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/01 16:47:18 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_hexdump(int qty, char **str)
{
	int	size_outp;
	int	hex_sign;

	size_outp = 1;
	hex_sign = 1;
	if (qty == 1)
		return (my_stdin3(size_outp));
	if (str[1][0] == '-' && str[1][1] == 'C' && str[1][2] == '\0')
	{
		hex_sign = 2;
		if (qty == 2)
			return (my_stdin3hex(size_outp));
		else
			return (my_display_file5(size_outp, str, qty, hex_sign));
	}
	else
		return (my_display_file5(size_outp, str, qty, hex_sign));
	return (0);
}
