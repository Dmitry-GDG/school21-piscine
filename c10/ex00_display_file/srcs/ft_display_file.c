/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:53:53 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/28 07:54:00 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_display_file2(char *file_name)
{
	int		fd;
	char	buffer[20000];
	int		ifread;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (3);
	}
	ifread = read(fd, buffer, 20000);
	while (ifread > 0)
	{
		ft_putstr(buffer);
		ifread = read(fd, buffer, 20000);
	}
	if (ifread == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (3);
	}
	close(fd);
	return (0);
}

int	ft_display_file(int qty, char **str)
{
	if (qty <= 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (qty > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (2);
	}
	else
		return (ft_display_file2(str[1]));
	return (0);
}
