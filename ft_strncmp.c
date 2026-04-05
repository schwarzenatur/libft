/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:27 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:16:34 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t max_len)
{
	size_t	pos;

	pos = 0;
	while (pos < max_len && str1[pos] && str2[pos] && str1[pos] == str2[pos])
		pos++;
	if (pos == max_len)
		return (0);
	return ((unsigned char)str1[pos] - (unsigned char)str2[pos]);
}
