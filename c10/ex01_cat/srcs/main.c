/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 07:48:37 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 07:48:43 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	return (ft_cat(argc, argv));
}

/* call it:
* make
* make clean
* ./ft_cat test1
* cat test1
* ./ft_cat test1 "hhh"
* cat test1 "hhh"
* ./ft_cat				//Ожидание ввода файла. Окончить ввод: ctrl+D
* cat				//Ожидание ввода файла. Окончить ввод: ctrl+D
* ./ft_cat "hhh"
* cat "hhh"
* ./ft_cat srcs
* cat srcs
* ./ft_cat test1 - test2  //Ожидание ввода файла. Окончить ввод: ctrl+D
* cat test1 - test2  //Ожидание ввода файла. Окончить ввод: ctrl+D
* ./ft_cat -			//Ожидание ввода файла. Окончить ввод: ctrl+D
* cat -			//Ожидание ввода файла. Окончить ввод: ctrl+D
* ./ft_cat test1 test2 > test3
* cat test1 test2 > test3
* make fclean
* make all
* make re
* make fclean */
