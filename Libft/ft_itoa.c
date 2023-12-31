/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:11:21 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/25 18:57:37 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenctr(int n)
{
	int	ctr;

	ctr = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		ctr++;
	while (n)
	{
		ctr++;
		n /= 10;
	}
	return (ctr);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		num;
	int		d;
	int		len;

	d = 0;
	num = n;
	len = lenctr(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	while (len--)
	{
		d = num % 10;
		num /= 10;
		if (d < 0)
			d *= -1;
		result[len] = d + 48;
		if (n < 0)
			result[0] = '-';
	}
	return (result);
}

// int	main(void)
// {
// 	int i;

// 	i = 1;

// 	printf("%s", ft_itoa(i));
// 	return (0);
// }