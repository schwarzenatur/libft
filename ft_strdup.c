/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:39 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:15:41 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	index;
	size_t	length;

	if (!src)
		return (NULL);
	length = ft_strlen(src);
	copy = (char *)malloc(sizeof(*copy) * (length + 1));
	if (!copy)
		return (NULL);
	index = 0;
	while (index < length)
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
