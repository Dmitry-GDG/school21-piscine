/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:46:35 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/01 16:46:38 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	int	r;

	r = ft_hexdump(argc, argv);
	write (1, "\n", 1);
	if (r > 0)
		return (r);
	return (0);
}

/* call it:
* make
* make clean
* ./ft_hexdump	//Ожидает ввод с экрана и ctrl+D
* hexdump		//Ожидает ввод с экрана и ctrl+D
* ./ft_hexdump test1 test2 test1 test2
* hexdump test1 test2 test1 test2
* ./ft_hexdump +C
* hexdump +C
* ./ft_hexdump -C	//Ожидает ввод с экрана и ctrl+D
* hexdump -C		//Ожидает ввод с экрана и ctrl+D
* ./ft_hexdump -C test1 test2 test1 test2
* hexdump -C test1 test2 test1 test2
* ./ft_hexdump -C 4
* hexdump -C 4
* make fclean
* make all
* make re
* make fclean */
