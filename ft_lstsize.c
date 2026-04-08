/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:36 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:46:26 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *node)
{
	int		len;
	t_list	*tmp;

	len = 0;
	tmp = node;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
