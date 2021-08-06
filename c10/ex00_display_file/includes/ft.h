/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:04:44 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/28 08:04:50 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>

int		ft_display_file2(char *file_name);
int		ft_display_file(int qty, char **str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
