/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:09 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:16:07 by hbasaran         ###   ########.fr       */
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
