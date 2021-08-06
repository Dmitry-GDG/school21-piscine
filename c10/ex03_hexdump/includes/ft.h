/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:45:59 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/01 16:46:02 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <stdlib.h>

int		ft_hexdump(int qty, char **str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		my_read_file2(char *outp, int size_outp, char *file_name, int j);
int		my_display_file5(int size_outp, char **str, int qty, int hex_sign);
void	ft_get_hex2(unsigned long long nb, int zeros);
void	ft_print_addr1(unsigned int str_size);
void	ft_print_addr2(unsigned int str_size);
void	ft_print_data1(unsigned char *c, int str_size);
void	ft_print_data2(unsigned char *c, int str_size);
void	*my_print_memory(void *addr, unsigned int size);
void	*my_print_memory_hex(void *addr, unsigned int size);
void	my_print_mistake(char *file_name);
int		my_resize_outp(char *outp, int size_outp, int i);
int		my_stdin3(int size_outp);
int		my_stdin3hex(int size_outp);

#endif
