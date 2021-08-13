/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:00:34 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/09 20:00:36 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, \
			int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else
	{
		if (cmpf((*root)->item, item) > 0)
		{
			if (!(*root)->left)
				(*root)->left = btree_create_node(item);
			else
				btree_insert_data(&(*root)->left, item, cmpf);
		}
		else
		{
			if (!(*root)->right)
				(*root)->right = btree_create_node(item);
			else
				btree_insert_data(&(*root)->right, item, cmpf);
		}
	}
}

/*#include <stdio.h>
*#include "ft_btree.h"
*void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
*t_btree	*btree_create_node(void *item);
*
*int	ft_strcmp(char *s1, char *s2)
*{
*	unsigned int	i;
*
*	i = 0;
*	while (s1[i] && s2[i] && (s1[i] == s2[i]))
*		i++;
*	return (s1[i] - s2[i]);
*}
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
*	node->left->right->right = btree_create_node("jas");
*	node->right = btree_create_node("oas");
*	node->right->left = btree_create_node("mas");
*	node->right->left->left = btree_create_node("las");
*	node->right->left->right = btree_create_node("nas");
*	node->right->right = btree_create_node("qas");
*	node->right->right->left = btree_create_node("pas");
*	node->right->right->right = btree_create_node("ras");
*	my_print_btree(node);
*	btree_insert_data(&node, "gertgert", (void *)&ft_strcmp);
*	printf ("-----------\n");
*	my_print_btree(node);
*	my_btree_free(node);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_insert_data.c btree_create_node.c \
*   && ./a.out */