/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:51:53 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:46:33 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t len)
{
	const unsigned char	*data;
	unsigned char		target;

	data = (const unsigned char *)ptr;
	target = (unsigned char)value;
	while (len)
	{
		if (*data == target)
			return ((void *)data);
		data++;
		len--;
	}
	return (NULL);
}
