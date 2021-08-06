/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:49:25 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 09:49:29 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
	write (1, "\n", 1);
}

/*void	ft_print_reverse_alphabet(void);
*
*int	main(void)
*{
*	ft_print_reverse_alphabet();
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_print_reverse_alphabet.c && ./a.out */
