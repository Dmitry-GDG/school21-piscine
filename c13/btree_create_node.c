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
*void my_btree_free2(t_btree **node) 
*{
*	if (*node) 
*	{
*		my_btree_free2(&((*node)->left));
*		my_btree_free2(&((*node)->right));
*		free(*node);
*		*node = NULL;
*	}
*}
*
*void my_btree_free(t_btree *node) 
*{
*	if (node)
*		my_btree_free2(&(node));
*	free(node);
*}
*
*int	main(void)
*{
*	t_btree	*node;
*
*	node = btree_create_node("Hello, word!");
*	printf("node->left = %s\n", (char *)node->left);
*	printf("node->right = %s\n", (char *)node->right);
*	printf("node->item = %s\n", (char *)node->item);
*	my_btree_free(node);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_create_node.c && ./a.out */