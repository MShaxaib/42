/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:08:18 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/10 18:49:32 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	else
		return (NULL);
}

// int	main(void)
// {
// 	char str[] = "helloworld";

// 	printf("%s", (strchr(str, '\0') - 5));

// 	printf("\n");

// 	printf("%s", (ft_strchr(str, '\0') - 5));
// 	return (0);
// }