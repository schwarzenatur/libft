/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:07 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:14:04 by hbasaran         ###   ########.fr       */
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
