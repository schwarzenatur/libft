/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:29 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:47:25 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;
	const char		*ptr;

	ch = (unsigned char)c;
	ptr = str;
	while (*ptr)
	{
		if ((unsigned char)*ptr == ch)
			return ((char *)ptr);
		ptr++;
	}
	if ((unsigned char)*ptr == ch)
		return ((char *)ptr);
	return (NULL);
}
