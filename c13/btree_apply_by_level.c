/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:57:11 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/11 11:57:14 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	size_l;
	int	size_r;

	if (!root)
		return (0);
	size_l = btree_level_count(root->left);
	size_r = btree_level_count(root->right);
	if (size_l > size_r)
		return (size_l + 1);
	else
		return (size_r + 1);
}

void	btree_apply_by_level2(t_btree *root, int *curr_lvl_first_el, int level,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root)
	{
		if (level == 1)
		{
			applyf(root->item, curr_lvl_first_el[0], curr_lvl_first_el[1]);
			curr_lvl_first_el[1] = 0;
		}
		else if (level > 1)
		{
			btree_apply_by_level2(root->left, curr_lvl_first_el, \
															level - 1, applyf);
			btree_apply_by_level2(root->right, curr_lvl_first_el, \
															level - 1, applyf);
		}
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
										int current_level, int is_first_elem))
{
	int	curr_lvl_first_el[2];
	int	btree_size;
	int	level;

	if (root)
	{
		btree_size = btree_level_count(root);
		level = 0;
		while (level < btree_size)
		{
			curr_lvl_first_el[0] = level;
			curr_lvl_first_el[1] = 1;
			btree_apply_by_level2(root, curr_lvl_first_el, ++level, applyf);
		}
	}
}

/*#include <stdio.h>
*#include <stdlib.h> 
*#include "ft_btree.h"
*int		btree_level_count(t_btree *root);
*void	btree_apply_by_level2(t_btree *root, int *curr_lvl_first_el, int level,
*			void (*applyf)(void *item, int current_level, int is_first_elem));
*void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
*							int current_level, int is_first_elem));
*
*void	my_print_btree(t_btree *root)
*{
*	if (!root)
*		return ;
*	printf("%s\n", (char *)root->item);	
*	if (root->left)
*	{
*		printf("root->left ");
*		my_print_btree(root->left);
*	}
*	if (root->right)
*	{
*		printf("root->right ");
*		my_print_btree(root->right);
*	}
*}
*
*void	my_print_btree2(void *node, int current_level, int is_first_elem)
*{
*	if (!node)
*		return ;
*	printf("Current node: %s, current level: %d, first node of the level? %d\n", \
*									(char *)node, current_level, is_first_elem);	
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
*	node = btree_create_node("kas");
*	node->left = btree_create_node("das");
*	node->left->left = btree_create_node("bas");
*	node->left->left->left = btree_create_node("aas");
*	node->left->left->right = btree_create_node("cas");
*	node->left->right = btree_create_node("fas");
*	node->left->right->left = btree_create_node("eas");
*	node->left->right->left->left = btree_create_node("elas");
*	node->left->right->left->right = btree_create_node("eras");
*	node->left->right->right = btree_create_node("jas");
*	node->right = btree_create_node("oas");
*	node->right->left = btree_create_node("mas");
*	node->right->left->left = btree_create_node("las");
*	node->right->left->right = btree_create_node("nas");
*	node->right->right = btree_create_node("qas");
*	node->right->right->left = btree_create_node("pas");
*	node->right->right->right = btree_create_node("ras");
*	my_print_btree(node);
*	printf ("-----------\n");
*	btree_apply_by_level(node, my_print_btree2);
*	my_btree_free(node);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_apply_by_level.c btree_create_node.c \
* && ./a.out */