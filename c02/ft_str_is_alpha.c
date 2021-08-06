/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 06:42:29 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 06:42:31 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	outp;

	outp = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A') || ((str[i] > 'Z') && (str[i] < 'a')) \
		|| (str[i] > 'z'))
			outp = 0;
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*int	ft_str_is_alpha(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		printf("%d\n", ft_str_is_alpha(argv[1]));
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_str_is_alpha.c && ./a.out dFResrrrrrrrrrTY4 */