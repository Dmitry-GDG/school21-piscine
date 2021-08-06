/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:14:53 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 10:14:57 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
	write(1, "\n", 1);
}

/*void	ft_print_numbers(void);
*
*int	main(void)
*{
*	ft_print_numbers();
*	return (0);
*}*/
/* call it:
*  Wall -Wextra -Werror ft_print_numbers.c && ./a.out */
