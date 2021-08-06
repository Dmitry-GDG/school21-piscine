/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:32:15 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/17 22:32:19 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

long long unsigned int	ft_recover_nbr(unsigned int len_str, unsigned int i, \
	unsigned int j, unsigned int size)
{
	long long int	outp;
	unsigned int	temp;
	unsigned int	t;

	outp = 0;
	if (i == len_str - 1)
		outp += j;
	else
	{
		temp = size;
		t = len_str - i - 1;
		while (t - 1)
		{
			temp *= size;
			t--;
		}
		outp += temp * j;
	}
	return (outp);
}

int	ft_lenstr(char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str])
		len_str++;
	return (len_str);
}

int	my_check_minus(char *str)
{
	int	minus;
	int	i;

	minus = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= (-1);
		i++;
	}
	return (minus);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	j;
	long long int	outp;
	int				len_str;
	int				minus;

	len_str = ft_lenstr(str);
	if (if_base_invalid(base) == 0)
		return (0);
	minus = my_check_minus(str);
	i = 0;
	outp = 0;
	while (str[i])
	{
		j = 0;
		while (base[j++])
		{
			if (str[i] == base[j])
				outp += ft_recover_nbr(len_str, i, j, if_base_invalid(base));
		}
		i++;
	}
	return (outp * minus);
}
