/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:53:53 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/28 07:54:00 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	my_read_file(char *outp, int size_outp, char *file_name)
{
	int		ifread;
	char	buffer;
	int		i;

	buffer = 1;
	ifread = read(3, &buffer, 1);
	i = 0;
	while (ifread > 0)
	{
		outp[i] = buffer;
		if (my_resize_outp(outp, size_outp, i) == 1)
			return (1);
		i++;
		ifread = read(3, &buffer, 1);
	}
	outp[i] = '\0';
	if (ifread == -1)
	{
		my_print_mistake(file_name);
		return (errno);
	}
	return (0);
}

int	ft_display_file4(int plus, int qty_outp, char *file_name, int size_outp)
{
	int		i;
	char	*outp;

	outp = malloc(sizeof(char) * size_outp + 3);
	if (outp == NULL)
		return (1);
	if (open(file_name, O_RDONLY) == -1)
	{
		my_print_mistake(file_name);
		return (errno);
	}
	if (my_read_file(outp, size_outp, file_name) != 0)
		return (1);
	close(3);
	i = ft_strlen(outp);
	if (my_print_outp(outp, plus, qty_outp, i) == 1)
		return (1);
	free (outp);
	return (0);
}

int	ft_display_file3(char *file_name)
{
	int		fd;
	char	buffer;
	int		ifread;

	buffer = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		my_print_mistake(file_name);
		ft_putstr("\n");
		return (errno);
	}
	ifread = read(fd, &buffer, 1);
	while (ifread > 0)
	{
		ft_putchar(buffer);
		ifread = read(fd, &buffer, 1);
	}
	if (ifread == -1)
	{
		my_print_mistake(file_name);
		return (errno);
	}
	close(fd);
	return (0);
}
