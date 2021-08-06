/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:11:25 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/11 14:11:28 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_all(int *n_size, int n)
{
	int		i;
	char	c;

	i = 0;
	while (++i < n)
		if (n_size[i - 1] >= n_size[i])
			return ;
	i = -1;
	while (++i < n)
	{	
		c = n_size[i] + 48;
		write(1, &c, 1);
	}
	if (n_size[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	n_size[9];

	if (n >= 10 || n <= 0)
		return ;
	i = -1;
	while (++i < n)
		n_size[i] = i;
	while (n_size[0] <= (10 - n) && n >= 1)
	{
		ft_print_all(n_size, n);
		if (n == 10)
			break ;
		n_size[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (n_size[i] > 9)
			{
				n_size[i - 1]++;
				n_size[i] = 0;
			}
		}
	}
}

/*void	ft_print_combn(int n);
*
*int	main(void)
*{
*	ft_print_combn(2);
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_print_combn.c && ./a.out | cat -e */
