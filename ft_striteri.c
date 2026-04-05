/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:47 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:15:46 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*func)(unsigned int, char *))
{
	unsigned int	pos;

	if (!str || !func)
		return ;
	pos = 0;
	while (str[pos] != '\0')
	{
		func(pos, &str[pos]);
		pos++;
	}
}
