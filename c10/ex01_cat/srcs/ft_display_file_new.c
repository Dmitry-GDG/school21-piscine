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

void	my_print_mistake(char *file_name)
{
	ft_putstr("ft_cat: ");
	ft_putstr(file_name);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

int	ft_display_file3(char *file_name)
{
	int		fd;
	char	buffer[30000];
	int		ifread;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		my_print_mistake(file_name);
		return (errno);
	}
	ifread = read(fd, buffer, 30000);
	while (ifread > 0)
	{
		ft_putstr(buffer);
		ifread = read(fd, buffer, 30000);
	}
	if (ifread == -1)
	{
		my_print_mistake(file_name);
		return (errno);
	}
	close(fd);
	return (0);
}
