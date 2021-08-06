/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:02:45 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/20 17:02:48 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int						ft_atoi_base(char *str, char *base);
unsigned int			if_base_invalid(char *base);
long long unsigned int	ft_recover_nbr(unsigned int len_str, unsigned int i, \
	unsigned int j, unsigned int size);
int						ft_lenstr(char *str);
int						my_check_minus(char *str);

char	my_minus(char *nbr, char *base_from)
{
	char	minus;
	int		outp_digit;

	outp_digit = ft_atoi_base(nbr, base_from);
	minus = '\0';
	if (outp_digit < 0)
		minus = '-';
	return (minus);
}

int	*my_tmp_array(char *nbr, char *base_from, char *base_to)
{
	int				*tmp;
	int				outp_digit;
	unsigned int	size_of_base_to;
	int				i;

	outp_digit = ft_atoi_base(nbr, base_from);
	size_of_base_to = if_base_invalid(base_to);
	i = 0;
	while (outp_digit)
	{
		outp_digit /= size_of_base_to;
		i++;
	}
	tmp = malloc(sizeof(int) * i);
	outp_digit = ft_atoi_base(nbr, base_from);
	if (outp_digit < 0)
		outp_digit *= (-1);
	i = 0;
	while (outp_digit)
	{
		tmp[i] = outp_digit % size_of_base_to;
		outp_digit /= size_of_base_to;
		i++;
	}
	return (tmp);
}

int	my_size_of_temp(char *nbr, char *base_from, char *base_to)
{
	int				outp_digit;
	unsigned int	size_of_base_to;
	int				i;

	outp_digit = ft_atoi_base(nbr, base_from);
	size_of_base_to = if_base_invalid(base_to);
	if (outp_digit < 0)
		outp_digit *= (-1);
	i = 0;
	while (outp_digit)
	{
		outp_digit /= size_of_base_to;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	int				j;
	int				*tmp;
	char			*outp;

	if (if_base_invalid(base_to) != 0)
	{
		tmp = my_tmp_array(nbr, base_from, base_to);
		i = my_size_of_temp(nbr, base_from, base_to);
		outp = malloc(sizeof(char) * i + 2);
		j = 0;
		if (my_minus(nbr, base_from) == '-')
		{
			j = 1;
			outp[0] = '-';
		}
		while (i > 0)
		{
			outp[j++] = base_to[tmp[i - 1]];
			i--;
		}
		outp[j] = '\0';
		return (outp);
	}
	return (0);
}

/*#include <stdio.h>
*char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
*
*int	main(int argc, char **argv)
*{
*	char	*str;
*
*	if (argc == 4)
*	{
*		str = ft_convert_base(argv[1], argv[2], argv[3]);
*		printf ("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
*		free(str);
*	}
*	return (0);
*}*/
/*call it:
* gcc -Wall -Wextra -Werror ft_convert_base.c ft_convert_base2.c && ./a.out \
"1234ab567" "0123456789ab" "0123456789"
* gcc -Wall -Wextra -Werror ft_convert_base.c ft_convert_base2.c && ./a.out \
"*^*" ")(*&^%$#@" "0123456789"
* gcc -Wall -Wextra -Werror ft_convert_base.c ft_convert_base2.c && ./a.out \
"-*^*" ")(*&^%$#@" "0123456789"
* gcc -Wall -Wextra -Werror ft_convert_base.c ft_convert_base2.c && ./a.out \
"80" "0123456789ABCDEF" ")(*&^%$#@" 
* gcc -Wall -Wextra -Werror ft_convert_base.c ft_convert_base2.c && ./a.out \
"-80" "0123456789ABCDEF" ")(*&^%$#@" 
* gcc -Wall -Wextra -Werror ft_convert_base.c ft_convert_base2.c && ./a.out \
"*^*" ")(*&^%$#@" "0123456789ab" */