/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:23:49 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 13:23:55 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_oupt;

void	print_string(int place[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = place[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_test_solution(int place[10], int nbr_column, int position_in_column)
{
	int	i;

	i = 0;
	while (i < nbr_column)
	{
		if (position_in_column == place[i] || \
			i + place[i] == nbr_column + position_in_column || \
			i - place[i] == nbr_column - position_in_column)
			return (0);
		i++;
	}
	return (1);
}

void	ft_find_solution(int place[10], int nbr_column)
{
	int	position_in_column;

	if (nbr_column == 10)
	{
		g_oupt++;
		print_string(place);
	}
	else
	{
		position_in_column = 0;
		while (position_in_column < 10)
		{
			if (ft_test_solution(place, nbr_column, position_in_column))
			{
				place[nbr_column] = position_in_column;
				ft_find_solution(place, nbr_column + 1);
			}
			position_in_column++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	place[10];

	g_oupt = 0;
	ft_find_solution(place, 0);
	return (g_oupt);
}

/*#include <stdio.h>
*int	ft_ten_queens_puzzle(void);
*
*int	main(void)
*{
*	printf("total number of displayed solutions %d\n", ft_ten_queens_puzzle());
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_ten_queens_puzzle.c  && ./a.out | cat -e */