/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:14 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:46:11 by hbasaran         ###   ########.fr       */
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
