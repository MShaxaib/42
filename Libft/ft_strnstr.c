/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:38:12 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/18 21:07:36 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while (needle[j] != 0 && haystack[i + j] == needle[j] && i + j < len)
			if (needle[++j] == 0)
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char haystack [30] = "aaabcabcd";
// 	char needle[10] = "cd";

// 	printf("%s\n", ft_strnstr(haystack, needle, 8));

// 	printf("%s\n", strnstr(haystack, needle, 8));
// 	return (0);
// }