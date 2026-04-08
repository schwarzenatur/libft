/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:02 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:47:42 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t buffer_size)
{
	size_t	dest_index;
	size_t	src_index;
	size_t	len_dest;
	size_t	len_source;
	size_t	total_len;

	len_dest = ft_strlen(destination);
	len_source = ft_strlen(source);
	if (buffer_size > len_dest)
		total_len = len_dest + len_source;
	else
		return (len_source + buffer_size);
	dest_index = len_dest;
	src_index = 0;
	while (source[src_index] && (dest_index + 1) < buffer_size)
	{
		destination[dest_index] = source[src_index];
		dest_index++;
		src_index++;
	}
	destination[dest_index] = '\0';
	return (total_len);
}
