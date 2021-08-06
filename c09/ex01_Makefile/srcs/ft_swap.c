/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:13:27 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 18:13:30 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
*void	ft_swap(int *a, int *b);
*
*int	main(void)
*{
*	int	a;
*	int	b;
*
*	a = 42;
*	b = 21;
*	printf("a = %d, ", a);
*	printf("b = %d\n", b);
*	ft_swap(&a, &b);
*	printf("a = %d, ", a);
*	printf("b = %d\n", b);
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_swap.c && ./a.out   */
