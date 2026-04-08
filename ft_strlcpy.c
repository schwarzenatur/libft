/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:09 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:47:47 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t buffer_size)
{
	size_t	index;

	if (!destination || !source)
		return (0);
	index = 0;
	if (buffer_size > 0)
	{
		while (source[index] && index < buffer_size - 1)
		{
			destination[index] = source[index];
			index++;
		}
		destination[index] = '\0';
	}
	return (ft_strlen(source));
}
