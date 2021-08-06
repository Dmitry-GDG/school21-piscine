/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_stdin3.c                                        :+:      :+:    :+:   */
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

int	my_stdin3(int size_outp)
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
	my_print_memory(outp, ft_strlen(outp));
	free (outp);
	return (0);
}

int	my_stdin3hex(int size_outp)
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
	my_print_memory_hex(outp, ft_strlen(outp));
	free (outp);
	return (0);
}
