/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:16:58 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/22 14:17:01 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	my_find_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	my_qty_words(char *str, char *charset)
{
	int	qty_words;
	int	i;

	qty_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && my_find_sep(str[i], charset) == 1)
			i++;
		if (str[i] && my_find_sep(str[i], charset) == 0)
		{
			qty_words++;
			while (str[i] && my_find_sep(str[i], charset) == 0)
				i++;
		}
	}
	return (qty_words);
}

void	my_place_word(char *outp, char *str, char *charset)
{
	int	i;

	i = 0;
	while (my_find_sep(str[i], charset) == 0)
	{
		outp[i] = str[i];
		i++;
	}
	outp[i] = '\0';
}

void	my_fill_array(char **outp, char *str, char *charset)
{
	int	word_position;
	int	i;
	int	j;

	word_position = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (my_find_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (my_find_sep(str[i + j], charset) == 0)
				j++;
			outp[word_position] = (char *)malloc(sizeof(char) * (j + 1));
			my_place_word(outp[word_position], str + i, charset);
			i += j;
			word_position++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		qty_words;
	char	**outp;

	qty_words = my_qty_words(str, charset);
	outp = (char **)malloc(sizeof(char *) * (qty_words + 1));
	if (outp == NULL)
		return (NULL);
	my_fill_array(outp, str, charset);
	outp[qty_words] = 0;
	return (outp);
}

/*#include <stdio.h>
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
*			printf("at address  %p  is placed  %s\n", &outp[i], outp[i]);
*			i++;
*		}
*		free(outp);
*		return (0);
*	}
*}*/
/* call it: 
* gcc -Wall -Wextra -Werror ft_split.c && ./a.out "_Create\$a\$##function=    \
* that splits++a##string" "! _=$+#@" */