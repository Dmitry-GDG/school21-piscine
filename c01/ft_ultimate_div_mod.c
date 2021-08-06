/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:45:28 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 18:45:33 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*#include <stdio.h>
*void	ft_ultimate_div_mod(int *a, int *b);
*
*int	main(void)
*{
*	int	a;
*	int	b;
*
*	a = 11;
*	b = 3;
*	ft_ultimate_div_mod(&a, &b);
*	printf("a = %d, " " " "b = %d\n", a, b);
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_ultimate_div_mod.c && ./a.out   */
