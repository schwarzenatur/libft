/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:14:06 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:16:51 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char ch, char const *set)
{
	while (*set)
	{
		if (ch == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *trim_chars)
{
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*result;

	if (!str || !trim_chars)
		return (NULL);
	start = 0;
	while (str[start] && is_in_set(str[start], trim_chars))
		start++;
	end = ft_strlen(str);
	while (end > start && is_in_set(str[end - 1], trim_chars))
		end--;
	new_len = end - start;
	result = (char *)malloc(sizeof(*result) * (new_len + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, str + start, new_len);
	result[new_len] = '\0';
	return (result);
}
