/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:38:12 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/17 21:37:24 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	haystack_len;
	size_t	needle_len;

	i = 0;
	haystack_len = ft_strlen((char *)haystack);
	needle_len = ft_strlen((char *)needle);
	if (!*haystack && !*needle)
		return ((char*)haystack);
	if (haystack_len < needle_len || len == 0)
		return (NULL);
	if (!*haystack && !len)
		return ((char *)haystack);
	if (!*needle)
		return ((char *)haystack);
	while (i < len - needle_len && haystack[i])
	{
		if(ft_strncmp(haystack + i - 1, needle, needle_len) == 0)	
		{
			return((char*)haystack + i);
		}
		i++;
	}
	return(0);
}
// int	main(void)
// {
// 	char haystack [30] = "aaabcabcd";
// 	char needle[10] = "cd";

// 	printf("%s\n", ft_strnstr(haystack, needle, 8));

// 	printf("%s\n", strnstr(haystack, needle, 8));
// 	return (0);
// }