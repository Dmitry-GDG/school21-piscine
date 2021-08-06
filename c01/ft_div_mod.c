/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:22:55 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 18:22:59 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
*void	ft_div_mod(int a, int b, int *div, int *mod);
*
*int	main(void)
*{
*	int	a;
*	int	b;
*	int	div;
*	int	mod;
*
*	a = 11;
*	b = 3;
*	div = 0;
*	mod = 0;
*	ft_div_mod(a, b, &div, &mod);
*	printf("div = %d, " " " "mod = %d\n", div, mod);
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_div_mod.c && ./a.out   */
