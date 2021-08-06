/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:18:06 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/18 12:18:09 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	outp;

	i = 2;
	outp = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb - 1)
	{
		outp *= i;
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*int	ft_iterative_factorial(int nb);
*
*int	main(void)
*{
*	printf("Factorial of 5 is:  %d\n", ft_iterative_factorial(5));
*	printf("Factorial of 12 is: %d\n", ft_iterative_factorial(12));
*	return (0);
*}*/
/*call it: #факториал числа больше 12 в int не помещается
* gcc -Wall -Wextra -Werror ft_iterative_factorial.c && ./a.out */
