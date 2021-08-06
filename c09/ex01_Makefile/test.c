/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:22:36 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/27 12:22:47 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(void)
{
	char	*t;

	t = "21 school";
	ft_putstr(t);
	ft_putchar('\n');
	return (0);
}
/* call it:
* make
* gcc test.c ./libft.a && ./a.out 
* make clean
* make all
* make re
* make fclean */
