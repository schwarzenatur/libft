/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:54:40 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:15:30 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_tokens(const char *str, char delim)
{
	int	index;
	int	tokens;

	index = 0;
	tokens = 0;
	while (str[index])
	{
		if (str[index] != delim)
		{
			tokens++;
			while (str[index] && str[index] != delim)
				index++;
		}
		else
			index++;
	}
	return (tokens);
}

static char	*extract_token(const char *str, char delim)
{
	char	*token;
	int		length;
	int		pos;

	length = 0;
	while (str[length] && str[length] != delim)
		length++;
	token = (char *)malloc(sizeof(char) * (length + 1));
	if (!token)
		return (NULL);
	pos = 0;
	while (pos < length)
	{
		token[pos] = str[pos];
		pos++;
	}
	token[pos] = '\0';
	return (token);
}

char	**ft_split(char const *str, char delim)
{
	int		i;
	int		k;
	char	**result;

	if (!str)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_tokens(str, delim) + 1));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != delim)
		{
			result[k] = extract_token(&str[i], delim);
			while (str[i] && str[i] != delim)
				i++;
			k++;
		}
		else
			i++;
	}
	result[k] = NULL;
	return (result);
}
