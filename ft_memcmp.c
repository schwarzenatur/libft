/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:52:29 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:14:44 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t size)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char *)buf1;
	b = (const unsigned char *)buf2;
	while (size > 0)
	{
		if (*a != *b)
			return ((int)(*a - *b));
		a++;
		b++;
		size--;
	}
	return (0);
}
