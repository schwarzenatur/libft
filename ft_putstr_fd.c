/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <basaran.gm@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:54:34 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/05 14:15:24 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	idx;

	if (!str)
		return ;
	idx = 0;
	while (str[idx] != '\0')
	{
		write(fd, &str[idx], 1);
		idx++;
	}
}
