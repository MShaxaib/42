/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:04:58 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/29 22:01:26 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*result;

	while (is_in_set(*s1, set) && *s1)
		s1++;
	end = strlen(s1);
	while (is_in_set(s1[end - 1], set) && end > 0)
		end--;
	result = (char *)malloc(end + 1);
	if (!result)
		return (NULL);
	result[end] = '\0';
	while (end--)
		result[end] = s1[end];
	return (result);
}

// int	main(void)
// {
// 	char s1[] = "";
// 	char s2[] = "";

// 	printf("%s", ft_strtrim(s1, s2));
// }