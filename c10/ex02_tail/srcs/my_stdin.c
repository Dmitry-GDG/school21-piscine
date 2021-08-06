/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:08:20 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 13:08:23 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	my_resize_outp(char *outp, int size_outp, int i)
{
	char	*temp;
	int		j;

	if (i == size_outp + 1)
	{
		size_outp *= 2;
		temp = malloc(sizeof(char) * size_outp + 2);
		if (temp == NULL)
			return (1);
		j = 0;
		while (j <= i)
		{
			temp[j] = outp[j];
			j++;
		}
		outp = temp;
	}
	return (0);
}

int	my_print_outp(char *outp, int plus, int qty_outp, int i)
{
	int	k;

	if (plus == -1)
	{
		if (qty_outp <= i)
			k = i - qty_outp;
		else
			k = 0;
	}
	if (plus == 1)
	{
		if (qty_outp <= i)
			k = qty_outp - 1;
		else
			k = i;
	}
	while (k < i)
	{
		ft_putchar(outp[k]);
		k++;
	}
	return (0);
}

int	ft_stdin2(int plus, int qty_outp, int size_outp)
{
	char	buffer;
	char	*outp;
	int		res;
	int		i;

	outp = malloc(sizeof(char) * size_outp + 3);
	if (outp == NULL)
		return (1);
	res = read(0, &buffer, 1);
	outp[0] = buffer;
	i = 1;
	while (read(0, &buffer, 1))
	{
		outp[i] = buffer;
		if (my_resize_outp(outp, size_outp, i) == 1)
			return (1);
		i++;
	}
	outp[i] = '\0';
	if (res == -1)
		ft_putstr(strerror(errno));
	if (my_print_outp(outp, plus, qty_outp, i) == 1)
		return (1);
	free (outp);
	return (0);
}

void	ft_stdin(void)
{
	char	buffer;
	int		res;

	res = read(0, &buffer, 1);
	if (res > 0)
	{
		ft_putchar(buffer);
		while (read(0, &buffer, 1))
			ft_putchar(buffer);
	}
	if (res == -1)
		ft_putstr(strerror(errno));
}
