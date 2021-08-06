/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:12:28 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/29 22:12:31 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		my_tail5(int qty, char **str);
int		my_tail4(int qty, char **str, int qty_outp, int size_outp);
int		my_tail3(int qty, char **str, int size_outp);
int		my_tail2(char **str);
int		ft_tail(int qty, char **str);
int		ft_atoi2(char *str);
int		my_minus(char *str);
int		my_read_file(char *outp, int size_outp, char *file_name);
int		ft_display_file4(int plus, int qty_outp, char *file_name, \
		int size_outp);
int		ft_display_file3(char *file_name);
void	my_print_mistake(char *file_name);
void	my_print_mistake2(char *file_name);
void	my_print_mistake3(char *file_name);
int		my_resize_outp(char *outp, int size_outp, int i);
int		my_print_outp(char *outp, int plus, int qty_outp, int i);
int		ft_stdin2(int plus, int qty_outp, int size_outp);
void	ft_stdin(void);

#endif