/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:55 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:15:53 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *first, char const *second)
{
	size_t	len_first;
	size_t	len_second;
	char	*result;

	if (!first || !second)
		return (NULL);
	len_first = ft_strlen(first);
	len_second = ft_strlen(second);
	result = (char *)malloc(sizeof(*result) * (len_first + len_second + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, first, len_first);
	ft_memcpy(result + len_first, second, len_second);
	result[len_first + len_second] = '\0';
	return (result);
}
