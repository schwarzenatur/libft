/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:40:19 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:45:04 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t len)
{
	unsigned char	*buffer;

	buffer = (unsigned char *)ptr;
	while (len > 0)
	{
		*buffer = '\0';
		buffer++;
		len--;
	}
}
