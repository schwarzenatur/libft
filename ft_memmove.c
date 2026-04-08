/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:53:11 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:46:53 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_forward(unsigned char *d, const unsigned char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

static void	ft_backward(unsigned char *d, const unsigned char *s, size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		ft_forward(d, s, len);
	else
		ft_backward(d, s, len);
	return (dst);
}
