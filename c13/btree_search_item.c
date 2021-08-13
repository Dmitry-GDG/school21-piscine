/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:48:32 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/10 16:48:35 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	*btree_search_item(t_btree *root, void *data_ref, \
		int (*cmpf)(void *, void *))
{
	void	*outp;

	outp = NULL;
	if (root)
	{
		outp = btree_search_item(root->left, data_ref, cmpf);
		if (outp == 0 && (cmpf(root->item, data_ref)) == 0)
			outp = root->item;
		if (outp == 0)
			outp = btree_search_item(root->right, data_ref, cmpf);
	}
	return (outp);
}

/*#include <stdio.h>
*#include "ft_btree.h"
*void	*btree_search_item(t_btree *root, void *data_ref, \
*		int (*cmpf)(void *, void *));
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
*	void	*outp;
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
* //	my_print_btree(node);
*	outp = btree_search_item(node, "pas", (void *)&ft_strcmp);
*	printf ("-----------\n%s\n", (char *)outp);
* //	my_print_btree(node);
*	my_btree_free(node);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror btree_search_item.c btree_create_node.c \
*   && ./a.out */