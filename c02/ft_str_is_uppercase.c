/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:07:54 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 07:07:57 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	outp;

	outp = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			outp = 0;
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*int	ft_str_is_uppercase(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		printf("%d\n", ft_str_is_uppercase(argv[1]));
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_str_is_uppercase.c && ./a.out SRXGHJjh14 */
