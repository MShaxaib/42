/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:50:18 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/17 19:41:45 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*strp;

	strp = (char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*strp == (char)c)
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
// 	//char str[] = "hello world";
// char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	//printf("%s\n", memchr(s, 0, 1));

// 	printf("%s", ft_memchr(s, 0, 1));
// 	return (0);
// }