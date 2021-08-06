/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:13:02 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 22:13:04 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	return (ft_tail(argc, argv));
}

/* call it:
* make
* make clean
* ./ft_tail -c 63 test.txt 	//Выводит последние 63 байта файла test.txt
* tail -c 63 test.txt		//Выводит последние 63 байта файла test.txt
* ./ft_tail -c 6	//Ожидает ввод с экрана и ctrl+D, выводит последние 9 байтов
* tail -c 6			//Ожидает ввод с экрана и ctrl+D, выводит последние 9 байтов
* ./ft_tail	//Ожидает ввод с экрана и ctrl+D, выводит полностью
* tail		//Ожидает ввод с экрана и ctrl+D, выводит полностью
* ./ft_tail -c -2 test1 test2
* tail -c -2 test1 test2
* ./ft_tail -c 2  test1 test2
* tail -c 2  test1 test2
* ./ft_tail -c +2  test1 test2
* tail -c +2  test1 test2
* ./ft_tail -c +2d  test1 test2
* tail -c +2d  test1 test2
* ./ft_tail hhh
* tail hhh
* ./ft_tail -c test1 test2
* tail -c test1 test2
* ./ft_tail -c
* tail -c 
* make fclean
* make all
* make re
* make fclean */
