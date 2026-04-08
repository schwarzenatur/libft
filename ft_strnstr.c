/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:33 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:48:02 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t max_len)
{
	size_t	start;
	size_t	offset;

	if (!*needle)
		return ((char *)haystack);
	start = 0;
	while (haystack[start] && start < max_len)
	{
		offset = 0;
		while (haystack[start + offset] && needle[offset]
			&& haystack[start + offset] == needle[offset]
			&& (start + offset) < max_len)
			offset++;
		if (!needle[offset])
			return ((char *)&haystack[start]);
		start++;
	}
	return (NULL);
}
