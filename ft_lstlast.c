/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:14 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:14:11 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *node)
{
	t_list	*temp;

	if (!node)
		return (NULL);
	temp = node;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
