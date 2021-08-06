/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:30:22 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/03 12:30:26 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <stdio.h>
*#include <unistd.h>
*void	ft_foreach(int *tab, int length, void(*f)(int));
*
*void	ft_putchar(char c)
*{
*	write(1, &c, 1);
*}
*
*void	ft_putnbr(int nb)
*{
*	if (nb == -2147483648)
*	{	
*		ft_putchar('-');
*		ft_putchar('2');
*		nb = 147483648;
*	}
*	if (nb < 0)
*	{
*		ft_putchar('-');
*		nb *= (-1);
*	}
*	if (nb < 10)
*		ft_putchar('0' + nb);
*	else
*	{
*		ft_putnbr(nb / 10);
*		ft_putchar(nb % 10 + '0');
*	}
*}
*
*int	main(void)
*{
*	int	tab[10];
*	int	length;
*	int	i;
*
*	length = 10;
*	tab[0] = 1;
*	i = 1;
*	while (i < length)
*	{
*		tab[i] = tab[i - 1] + 2;
*		i++;
*	}
*	ft_foreach(tab, length, &ft_putnbr);
*	write(1, "\n", 1);
*	i = 0;
*	while (i < length)
*	{
*		printf ("tab[%d] = %d\n", i, tab[i]);
*		i++;
*	}
*}*/

/* call it:
* gcc -Wall -Wextra -Werror ft_foreach.c && ./a.out */
