/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:24:42 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/11 20:33:10 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*strp1;
	const unsigned char	*strp2;

	strp1 = (unsigned char *)s1;
	strp2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*strp1 != *strp2)
		{
			return (*strp1 - *strp2);
		}
		strp1++;
		strp2++;
		n--;
	}
	return (0);
}
int	main(void)
{
	char str1[] = "hello";
	char str2[] = "hea1llo";

	printf("%d\n", memcmp(str1, str2, 5));

	printf("%d", ft_memcmp(str1, str2, 5));
}