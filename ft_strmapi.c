/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:20 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:47:55 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	char	*new_str;
	size_t	length;
	size_t	pos;

	if (!str || !func)
		return (NULL);
	length = ft_strlen(str);
	new_str = (char *)malloc(sizeof(*new_str) * (length + 1));
	if (!new_str)
		return (NULL);
	pos = 0;
	while (pos < length)
	{
		new_str[pos] = func(pos, str[pos]);
		pos++;
	}
	new_str[length] = '\0';
	return (new_str);
}
