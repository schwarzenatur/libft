/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:24 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:46:15 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *node, void *(*func)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_elem;

	if (!node || !func)
		return (NULL);
	new_head = NULL;
	while (node)
	{
		new_elem = ft_lstnew(func(node->content));
		if (!new_elem)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_elem);
		node = node->next;
	}
	return (new_head);
}
