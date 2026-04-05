/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:42:36 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:14:28 by hbasaran         ###   ########.fr       */
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
