/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_print_memory_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:10:19 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/02 15:10:22 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_get_hex2(unsigned long long nb, int zeros);

void	ft_print_addr2(unsigned int str_size)
{
	unsigned int	tmp;
	int				i;

	tmp = str_size;
	i = 1;
	while (i++ < 8)
	{
		if (tmp < 16)
			write(1, "0", 1);
		tmp /= 16;
	}
	ft_get_hex2(str_size, 0);
}

void	ft_print_data2(unsigned char *c, int str_size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		write(1, " ", 1);
		if (i % 8 == 0)
			write(1, " ", 1);
		if (i < str_size)
			ft_get_hex2((unsigned long long)*(c + i), 1);
		else if (i != 16)
			write(1, "  ", 2);
	}
	i = -1;
	write(1, "|", 1);
	while (i++ < str_size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			write(1, ".", 1);
		else
			write(1, (c + i), 1);
	}
	write(1, "|", 1);
}

void	*my_print_memory_hex(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	str_size;
	unsigned int	j;

	i = 0;
	c = addr;
	j = 0;
	ft_print_addr2(j);
	while (i * 16 < size)
	{
		if (i < size / 16)
			str_size = 16;
		else
			str_size = size % 16;
		ft_print_data2(c + (i * 16), str_size);
		write(1, "\n", 1);
		if (i < size / 16)
			j += 16;
		else
			j += size % 16;
		ft_print_addr2(j);
		i++;
	}
	return (addr);
}
