/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:19:09 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 11:19:13 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
*int	ft_fibonacci(int index);
*
*int	main(void)
*{
*	printf ("-100\t-th element of the Fibonacci: %d\n", ft_fibonacci(-100));
*	printf ("-1\t-th element of the Fibonacci: %d\n", ft_fibonacci(-1));
*	printf ("0\t-th element of the Fibonacci: %d\n", ft_fibonacci(0));
*	printf ("1\t-th element of the Fibonacci: %d\n", ft_fibonacci(1));
*	printf ("2\t-th element of the Fibonacci: %d\n", ft_fibonacci(2));
*	printf ("3\t-th element of the Fibonacci: %d\n", ft_fibonacci(3));
*	printf ("10\t-th element of the Fibonacci: %d\n", ft_fibonacci(10));
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_fibonacci.c && ./a.out */
