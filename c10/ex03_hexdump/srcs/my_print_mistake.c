/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_print_mistake.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 08:31:52 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/01 08:31:59 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	my_print_mistake(char *file_name)
{
	ft_putstr("ft_hexdump: ");
	ft_putstr(file_name);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	ft_putstr("ft_hexdump: ");
	ft_putstr(file_name);
	ft_putstr(": Bad file descriptor");
}
