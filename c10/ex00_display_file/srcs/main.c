/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 07:41:10 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 07:41:14 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	return (ft_display_file(argc, argv));
}

/* call it:
* make
* make clean
* ./ft_display_file test.txt
* ./ft_display_file test.txt "hhh"
* ./ft_display_file
* ./ft_display_file "hhh"
* ./ft_display_file srcs
* make fclean
* make all
* make re
* make fclean */
