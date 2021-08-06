/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:01:08 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/28 19:01:12 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_cat2(char *file1, char *file2, char *file3)
{
	char	outp_file3[30000];
	int		i;

	ft_strcpy(outp_file3, file1);
	ft_strcat(outp_file3, file2);
	i = 0;
	while (outp_file3[i] != '\0')
	{
		file3[i] = outp_file3[i];
		i++;
	}
	file3[i] = '\0';
	return (file3);
}

int	ft_cat(int qty, char **str)
{
	int	i;
	int	res;

	res = 0;
	if (qty == 5 && str[3][0] == '>')
	{
		ft_display_file3(ft_cat2(str[1], str[2], str[4]));
		return (0);
	}
	else
	{
		i = 1;
		while (i < qty)
		{
			if (str[i][0] == '-')
				ft_stdin();
			else
				res = ft_display_file3(str[i]);
			i++;
		}
		if (qty == 1)
			ft_stdin();
	}
	return (res);
}
