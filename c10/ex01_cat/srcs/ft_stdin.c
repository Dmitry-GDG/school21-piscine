/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:08:20 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 13:08:23 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

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
