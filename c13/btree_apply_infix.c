/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:07:05 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 19:07:08 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}

/*#include <unistd.h>
*#include "ft_btree.h"
*void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
*t_btree	*btree_create_node(void *item);
*
*void	ft_putchar(char c)
*{
*	write (1, &c, 1);
*}
*
*void	ft_putstr(char *str)
*{
*	int	i;
*
*	i = 0;
*	while (str[i])
*	{
*		ft_putchar(str[i]);
*		i++;
*	}
*	write (1, "\n", 1);
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
*	node->left->right->right = btree_create_node("main->left->right->right");
*	node->right = btree_create_node("main->right");
*	node->right->left = btree_create_node("main->right>left");
*	node->right->left->left = btree_create_node("main->right->left->left");
*	node->right->left->right = btree_create_node("main->right->left->right");
*	node->right->right = btree_create_node("main->right->right");
*	node->right->right->left = btree_create_node("main->right>right->left");
*	node->right->right->right = btree_create_node("main->right->right->right");
*	btree_apply_infix(node, (void *)&ft_putstr);
*	my_btree_free(node);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_apply_infix.c btree_create_node.c && ./a.out */