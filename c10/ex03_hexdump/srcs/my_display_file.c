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

int	my_read_file2(char *outp, int size_outp, char *file_name, int j)
{
	int		ifread;
	char	buffer;
	int		i;

	buffer = 1;
	ifread = read(3, &buffer, 1);
	i = j;
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

void	my_print_file2(int hex_sign, char *outp)
{
	if (hex_sign == 1)
		my_print_memory(outp, ft_strlen(outp));
	else
		my_print_memory_hex(outp, ft_strlen(outp));
}

int	my_display_file5(int size_outp, char **str, int qty, int hex_sign)
{
	char	*outp;
	int		i;
	int		j;

	i = hex_sign;
	j = 0;
	outp = malloc(sizeof(char) * size_outp + 3);
	if (outp == NULL)
		return (1);
	while (i < qty)
	{
		if (open(str[i], O_RDONLY) == -1)
		{
			my_print_mistake(str[i]);
			return (errno);
		}
		if (my_read_file2(outp, size_outp, str[i], j) != 0)
			return (1);
		close(3);
		j = ft_strlen(outp);
		i++;
	}
	my_print_file2(hex_sign, outp);
	free (outp);
	return (0);
}
