/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 07:58:28 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/20 07:58:31 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*outp;
	int	i;

	if (min >= max)
		return (NULL);
	outp = malloc(sizeof(int) * (max - min));
	if (outp == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		outp[i] = min + i;
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*int	*ft_range(int min, int max);
*
*int	main(void)
*{
*	int	min;
*	int	max;
*	int	*result;
*	int	i;
*
*	min = 11;
*	max = 21;
*	result = ft_range(min, max);
*	printf("min = %d, max = %d\n", min, max);
*	i = 0;
*	while (result[i])
*	{
*		printf("integer %d\tis placed in address %p\n", result[i], &result[i]);
*		i++;
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_range.c  && ./a.out  */