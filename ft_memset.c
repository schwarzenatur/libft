/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:53:46 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:15:05 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*buffer;
	size_t			i;
	unsigned char	fill;

	buffer = (unsigned char *)ptr;
	fill = (unsigned char)value;
	i = 0;
	while (i < len)
	{
		buffer[i] = fill;
		i++;
	}
	return (ptr);
}
