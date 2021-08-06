/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:38:58 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 10:39:05 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
		write(1, "P", 1);
	if (n < 0)
		write(1, "N", 1);
}

/*void	ft_is_negative(int n);
*
*int	main(void)
*{
*	int i;
*
*	i = 25;
*	ft_is_negative(i);
*	write(1, "\n", 1);
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_is_negative.c && ./a.out */
