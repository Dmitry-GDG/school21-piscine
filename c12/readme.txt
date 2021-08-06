% **************************************************************************** %
%                                                                              %
%                                                         :::      ::::::::    %
%    readme.txt                                         :+:      :+:    :+:    %
%                                                     +:+ +:+         +:+      %
%    By: dmitry <marvin@42.fr>                      +#+  +:+       +#+         %
%                                                 +#+#+#+#+#+   +#+            %
%    Created: 2021/08/05 11:28:38 by dmitry            #+#    #+#              %
%    Updated: 2021/08/05 11:28:42 by dmitry           ###   ########.fr        %
%                                                                              %
% **************************************************************************** %

Несколько способов получения данных экземпляра структуры из первого 
элементам массива указателей "t_list	**tab_list"

	printf("list->data = %s\n", (char *)list->data);
	printf("list->next = %s\n", (char *)list->next);
	printf("list.data = %s\n", (char *)(*list).data);


	ft_putstr((char *)((*tab_list).next->data));
	ft_putstr((char *)((*(**tab_list).next).data));
	ft_putstr((char *)((*tab_list[0]).next->data));
	ft_putstr((char *)((*(*tab_list[0]).next).data));
	ft_putstr((char *)(tab_list[0][0].next->data));
	ft_putstr((char *)(tab_list[0][0].next[0].data));
	ft_putstr((char *)((*tab_list)->next->data));
	ft_putstr((char *)(tab_list[0]->next->data));
