/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:02:15 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/28 19:02:19 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <sys/errno.h>

char	*ft_cat2(char *file1, char *file2, char *file3);
int		ft_cat(int qty, char **str);
void	my_print_mistake(char *file_name);
int		ft_display_file3(char *file_name);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_stdin(void);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);

#endif
