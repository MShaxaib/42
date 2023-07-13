/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:50:18 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/11 20:24:02 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*strp;

	strp = (char *)s;
	if (n == 0)
	{
		return (0);
	}
	while (i < ft_strlen(s) && i < n)
	{
		if (*strp == c)
		{
			return (strp);
		}
		i++;
		strp++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char str[] = "hello world";

// 	printf("%s\n", memchr(str, 1, 4));

// 	// printf("\n");

// 	printf("%s", ft_memchr(str, 1, 5));
// 	return (0);
// }