/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:41:50 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:45:56 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*node;

	if (!head || !del)
		return ;
	node = *head;
	while (node)
	{
		tmp = node->next;
		del(node->content);
		free(node);
		node = tmp;
	}
	*head = NULL;
}
