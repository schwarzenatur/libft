/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:07 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:46:06 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *node, void (*func)(void *))
{
	if (!node || !func)
		return ;
	while (node)
	{
		func(node->content);
		node = node->next;
	}
}
