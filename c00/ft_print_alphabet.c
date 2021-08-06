/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 00:35:02 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 00:35:05 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		c++;
	}
	write(1, "\n", 1);
}

/*void	ft_print_alphabet(void);
*
*int	main(void)
*{
*	ft_print_alphabet();
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_print_alphabet.c && ./a.out */
