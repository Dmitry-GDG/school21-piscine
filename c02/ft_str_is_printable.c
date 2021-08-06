/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:08:45 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 07:08:47 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	outp;

	outp = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] > 126))
			outp = 0;
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*int	ft_str_is_printable(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		printf("%d\n", ft_str_is_printable(argv[1]));
*	return (0);
*}*/
/*call it:
* gcc -Wall -Wextra -Werror ft_str_is_printable.c && ./a.out DfeE34\#\@\%\^\& */
