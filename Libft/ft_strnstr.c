/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:38:12 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/11 19:33:59 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		while ((*haystack + i) == (*needle + i) && (*needle + i) && i <= len)
		{
			if (!*needle + i + 1)
				return ((char *)haystack);
			i++;
		}
		haystack++
	}
	return (0);
}
int	main(void)
{
	char hay[] = "heloo";
	char nedle[] = "l";

	printf("%s\n", ft_strnstr(hay, nedle, 8));

	printf("%s\n", strnstr(hay, nedle, 8));
	return (0);
}