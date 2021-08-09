/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:53:37 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 17:53:41 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	if (node == NULL)
		return (NULL);
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}

/*#include <stdio.h>
*#include "ft_btree.h"
*#include <stdlib.h>
*t_btree	*btree_create_node(void *item);
*
*int	main(void)
*{
*	t_btree	*btree;
*
*	btree = btree_create_node("Hello, word!");
*	printf("btree->left = %s\n", (char *)btree->left);
*	printf("btree->right = %s\n", (char *)btree->right);
*	printf("btree->item = %s\n", (char *)btree->item);
*	free(btree);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_create_node.c && ./a.out */