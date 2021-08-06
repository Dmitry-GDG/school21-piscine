/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:57:36 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 18:57:40 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(int argc, char **argv)
*void	ft_putstr(char *str);
*{
*	if (argc == 2)
*		ft_putstr(argv[1]);
*	return (0);
*}*/
/*call it:
*    gcc -Wall -Wextra -Werror ft_putstr.c && ./a.out ghtytfrtttrrr   */
