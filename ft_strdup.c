/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:39 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:47:30 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
