/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:13:58 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:16:46 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const unsigned char	target = (unsigned char)ch;
	char				*found;

	found = NULL;
	if (!str)
		return (NULL);
	while (*str)
	{
		if ((unsigned char)*str == target)
			found = (char *)str;
		str++;
	}
	if ((unsigned char)*str == target)
		return ((char *)str);
	return (found);
}
