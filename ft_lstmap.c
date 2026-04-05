/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:24 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:14:16 by hbasaran         ###   ########.fr       */
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
