/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:30:25 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/17 18:30:28 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	if_base_invalid(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 127 || base[i] < 33)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	int				i;
	int				outp[130];

	size = if_base_invalid(base);
	if (size != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= (-1);
		}
		i = 0;
		while (nbr)
		{
			outp[i] = nbr % size;
			nbr /= size;
			i++;
		}
		while (i > 0)
		{
			write (1, &base[outp[i - 1]], 1);
			i--;
		}
	}
}

/*void	ft_putnbr_base(int nbr, char *base);
*
*int	main(int argc, char **argv)
*{
*	int	nbr;
*
*	nbr = 128;
*	if (argc == 2 )
*		ft_putnbr_base(nbr, argv[1]);
*	return (0);
*}*/
/*call it: 
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out "0123456789"  
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out "01"  
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out "0123"
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out "0123456789ab"
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out "0123456789ABCDEF"
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out "poneyvif" 
* gcc -Wall -Wextra -Werror ft_putnbr_base.c && ./a.out ")(*&^%$#@"  */