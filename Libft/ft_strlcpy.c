/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:41:44 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/17 16:51:12 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(src + i))
	{
		i++;
	}
	if (!n)
	{
		return (i);
	}
	while (--n && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (i);
}
// int	main(void)
// {
// 	char str[] = "hellosssssssss";
// 	char dst[] = "worlds";

// 	printf("%lu", strlcpy(dst, str, 2));
// 	printf("%s", "\n");
// 	printf("%lu", ft_strlcpy(dst, str, 2));

// 	return (0);
// }