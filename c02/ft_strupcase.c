/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:30:10 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 07:30:13 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
*char	*ft_strupcase(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*	{
*		printf("was: \t\t%s\n", argv[1]);
*		printf("became: \t%s\n", ft_strupcase(argv[1]));
*	}
*	return (0);
*}*/
/*call it:
*  gcc -Wall -Wextra -Werror ft_strupcase.c && ./a.out AaZzDfeE34\#\@  */
