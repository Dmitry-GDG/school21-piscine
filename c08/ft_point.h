/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:43:24 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/23 10:43:29 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H
typedef struct s_point {
	int	x;
	int	y;
}	t_point;
void	set_point(t_point *point);
#endif
