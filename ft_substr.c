/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:14:15 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:48:15 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int begin, size_t sub_len)
{
	char	*sub;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (begin >= str_len)
	{
		sub = (char *)malloc(sizeof(*sub));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (sub_len > str_len - begin)
		sub_len = str_len - begin;
	sub = (char *)malloc(sizeof(*sub) * (sub_len + 1));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, str + begin, sub_len);
	sub[sub_len] = '\0';
	return (sub);
}
