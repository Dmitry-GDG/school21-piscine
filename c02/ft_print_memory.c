/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:10:19 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 15:10:22 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_get_hex(unsigned long long nb, int zeros)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && zeros == 1)
		write(1, "0", 1);
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		write(1, &base[nb], 1);
	}
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			write(1, "0", 1);
		tmp /= 16;
	}
	ft_get_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int str_size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i < str_size)
		{
			ft_get_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
		{
			write(1, "  ", 2);
		}
	}
	i = -1;
	while (i++ < str_size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			write(1, ".", 1);
		else
			write(1, (c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	str_size;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			str_size = 16;
		else
			str_size = size % 16;
		ft_print_addr((unsigned long long)c + (i * 16));
		write(1, ":", 1);
		ft_print_data(c + (i * 16), str_size);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

/*void	*ft_print_memory(void *addr, unsigned int size);
/
*int	main(int argc, char **argv)
*{
*	unsigned int	size;
*
*	size = 291;
*	if (argc == 2)
*		ft_print_memory(argv[1], size);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_print_memory.c && ./a.out "Liev Tolstoy \
* was a Russian writer who primarily wrote novels and short stories. \
* Later in life, he also wrote plays and essays. His two most famous works, \
* the novels War and Peace and Anna Karenina, are acknowledged as two of the \
* greatest novels of all time and a pinnacle of realist fiction. "
* gcc -Wall -Wextra -Werror ft_print_memory.c && ./a.out "Liev Tolstoy \
* was a Russian writer who primarily wrote novels and short stories. \
* Later in life, he also wrote plays and essays. His two most famous works, \
* the novels War and Peace and Anna Karenina, are acknowledged as two of the \
* greatest novels of all time and a pinnacle of realist fiction. " | cat -te */