/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:39:50 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/20 10:39:53 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size_range;
	int	i;
	int	*tmp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size_range = max - min;
	tmp = (int *)malloc(sizeof(int) * size_range);
	if (tmp == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (size_range);
}

/*#include <stdio.h>
*
*int	main(void)
*{
*	int	min;
*	int	max;
*	int	i;
*	int	*range ;
*	int	size_range;
*
*	min = 21;
*	max = 32;
*	size_range = ft_ultimate_range(&range, min, max);
*	printf("min = %d, max = %d\n", min, max);
*	printf("size of range = %d\n", size_range);
*	i = 0;
*	while (i < size_range)
*	{
*		printf("integer %d\tis placed in %p\n", range[i], &range[i]);
*		i++;
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_ultimate_range.c && ./a.out */
