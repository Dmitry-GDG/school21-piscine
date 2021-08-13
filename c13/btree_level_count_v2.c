/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:49:04 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/11 10:49:07 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	if (btree_level_count(root->left) > btree_level_count(root->right))
		return (btree_level_count(root->left) + 1);
	else
		return (btree_level_count(root->right) + 1);
}

/*#include <stdio.h>
*#include "ft_btree.h"
*int		btree_level_count(t_btree *root);
*t_btree	*btree_create_node(void *item);
*
*void	my_print_btree2(t_btree *root)
*{
*	if (!root)
*		return ;
*	printf("%s\n", (char *)root->item);
*	if (root->left)
*		my_print_btree2(root->left);
*	if (root->right)
*		my_print_btree2(root->right);
*}
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
*	node = btree_create_node("main");
*	node->left = btree_create_node("main->left");
*	node->left->left = btree_create_node("main->left->left");
*	node->left->left->left = btree_create_node("main->left->left->left");
*	node->left->left->right = btree_create_node("main->left->left->right");
*	node->left->right = btree_create_node("main->left->right");
*	node->left->right->left = btree_create_node("main->left->right->left");
*	node->left->right->left->right = \
*						btree_create_node("main->left->right->left->right");
*	node->left->right->left->right->right = \
*					btree_create_node("main->left->right->left->right->right");
*	node->left->right->right = btree_create_node("main->left->right->right");
*	node->right = btree_create_node("main->right");
*	node->right->left = btree_create_node("main->right>left");
*	node->right->left->left = btree_create_node("main->right->left->left");
*	node->right->left->right = btree_create_node("main->right->left->right");
*	node->right->right = btree_create_node("main->right->right");
*	node->right->right->left = btree_create_node("main->right>right->left");
*	node->right->right->right = btree_create_node("main->right->right->right");
*	my_print_btree2(node);
*	printf("---------\nmax_size = %d\n", btree_level_count(node));
*	my_btree_free(node);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_level_count_v2.c btree_create_node.c \
* && ./a.out */