/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasaran <hbasaran@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 19:41:19 by hbasaran          #+#    #+#             */
/*   Updated: 2026/04/08 17:45:39 by hbasaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_str(char *res, long n, int index)
{
	if (n == 0)
	{
		res[0] = '0';
		return ;
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[index] = (n % 10) + 48;
		n /= 10;
		index--;
	}
}

char	*ft_itoa(int value)
{
	char	*result;
	long	num;
	int		length;

	num = value;
	length = ft_numlen(num);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
	ft_fill_str(result, num, length - 1);
	return (result);
}
