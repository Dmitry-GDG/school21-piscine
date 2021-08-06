/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:10:19 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 15:10:22 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_get_hex2(unsigned long long nb, int zeros)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && zeros == 1)
		write(1, "0", 1);
	if (nb >= 16)
	{
		ft_get_hex2(nb / 16, 0);
		ft_get_hex2(nb % 16, 0);
	}
	else
	{
		write(1, &base[nb], 1);
	}
}

void	ft_print_addr1(unsigned int str_size)
{
	unsigned int	tmp;
	int				i;

	tmp = str_size;
	i = 1;
	while (i++ < 7)
	{
		if (tmp < 16)
			write(1, "0", 1);
		tmp /= 16;
	}
	ft_get_hex2(str_size, 0);
}

void	ft_print_data1(unsigned char *c, int str_size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		write(1, " ", 1);
		if (i < str_size)
			ft_get_hex2((unsigned long long)*(c + i), 1);
		else if (i != 16)
			write(1, "  ", 2);
	}
}

void	*my_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	str_size;
	unsigned int	j;

	i = 0;
	c = addr;
	j = 0;
	ft_print_addr1(j);
	while (i * 16 < size)
	{
		if (i < size / 16)
			str_size = 16;
		else
			str_size = size % 16;
		ft_print_data1(c + (i * 16), str_size);
		write(1, "\n", 1);
		if (i < size / 16)
			j += 16;
		else
			j += size % 16;
		ft_print_addr1(j);
		i++;
	}
	return (addr);
}
