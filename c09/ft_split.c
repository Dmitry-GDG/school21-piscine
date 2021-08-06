/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:58:13 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/27 12:58:18 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	my_if_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == ' ')
		return (1);
	return (0);
}

int	my_find_qty_str(char *str, char *charset)
{
	int	qty_str;
	int	i;

	qty_str = 1;
	i = 0;
	while (str[i])
	{
		if (my_if_sep(str[i], charset))
		{
			i++;
			while (my_if_sep(str[i], charset))
				i++;
			i--;
			qty_str++;
		}
		if (str[i] == ' ')
			i++;
		i++;
	}
	return (qty_str);
}

int	ft_lenstr(char *str)
{
	int	lenstr;

	lenstr = 0;
	while (str[lenstr])
		lenstr++;
	return (lenstr);
}

void	my_fill_str(char **outp, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;
	int	temp;

	j = -1;
	i = 0;
	while (++j < ft_lenstr(str))
	{
		if (my_if_sep(str[j], charset) == 0)
		{
			k = 0;
			while (str[j] && (my_if_sep(str[j], charset) == 0))
			{
				temp = j;
				j++;
				k++;
			}
			outp[i] = (char *)malloc(sizeof(char) * (k + 1));
			outp[i][k] = '\0';
			while (k >= 1)
				outp[i][--k] = str[temp--];
			i++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**outp;
	int		qty_str;

	qty_str = my_find_qty_str(str, charset);
	outp = (char **)malloc(sizeof(char *) * (qty_str + 1));
	if (outp == NULL)
		return (NULL);
	my_fill_str(outp, str, charset);
	outp[qty_str] = 0;
	return (outp);
}

/*#include <stdio.h>
*char	**ft_split(char *str, char *charset);
*
*int	main(int argc, char **argv)
*{
*	char	**outp;
*	int		i;
*
*	if (argc == 3)
*	{
*		outp = ft_split(argv[1], argv[2]);
*		i = 0;
*		while (outp[i])
*		{
*			printf("at address %p is placed %s\n", &outp[i], outp[i]);
*			i++;
*		}
*		free (outp);
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_split.c && ./a.out "_Create\$a\$##function=    \
* that splits++a##string" "! _=$+#@" */