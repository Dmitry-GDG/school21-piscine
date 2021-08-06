/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:18:25 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 11:18:28 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pr_hex(int i)
{
	int	tt;

	tt = i % 16;
	if (tt < 10)
		write (1, &tt, 1);
	else if (tt == 10)
		write (1, "a", 1);
	else if (tt == 11)
		write (1, "b", 1);
	else if (tt == 12)
		write (1, "c", 1);
	else if (tt == 13)
		write (1, "d", 1);
	else if (tt == 14)
		write (1, "e", 1);
	else if (tt == 15)
		write (1, "f", 1);
}

void	pr_unprint(char c)
{
	write(1, "\\", 1);
	if (c == 'a')
		write(1, "07", 2);
	else if (c == 'b')
		write(1, "08", 2);
	else if (c == 't')
		write(1, "09", 2);
	else if (c == 'n')
		write(1, "0a", 2);
	else if (c == 'v')
		write(1, "0b", 2);
	else if (c == 'f')
		write(1, "0c", 2);
	else if (c == 'r')
		write(1, "0d", 2);
	else if (c == 'e')
		write(1, "ib", 2);
	else if (c == '0')
		write(1, "00", 2);
	else
		write(1, &c, 1);
}

void	pr_other(int i)
{
	write(1, "\\", 1);
	if (i < 16)
	{
		write(1, "0", 1);
		pr_hex(i);
	}
	else
	{
		pr_hex(i / 16);
		pr_hex(i % 16);
	}	
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 92 && str[i + 1] == 92)
		{
			write(1, "\\", 1);
			i += 1;
		}
		else if (str[i] == 92 && str[i + 1] != 92)
		{
			pr_unprint(str[i + 1]);
			i += 1;
		}	
		else if (((str[i] > 31) && (str[i] < 127)) || (str[i] > 127))
			write(1, &str[i], 1);
		else
			pr_other(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

/*void	ft_putstr_non_printable(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		ft_putstr_non_printable(argv[1]);
*	return (0);
*}*/
/* call it:
*   gcc -Wall -Wextra -Werror ft_putstr_non_printable.c && 
*   ./a.out "Coucou\ntu vas bien ?" */
