/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:25:30 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/17 10:25:34 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_atoi2(char *str)
{
	int	i;
	int	outp;

	i = 0;
	outp = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		outp = outp * 10 + str[i] - '0';
		i++;
	}
	if (str[i] != '\0')
		errno = 1;
	return (outp);
}

int	my_minus(char *str)
{
	int	i;
	int	plus;

	i = 0;
	plus = -1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+')
		plus = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (plus);
	return (0);
}
