/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:51:53 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:14:33 by hbasaran         ###   ########.fr       */
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
