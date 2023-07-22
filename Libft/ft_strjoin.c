/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:45:44 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/22 19:05:23 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2 + 1;
	result = (char *)malloc(total_len);
	if (result != NULL)
	{
		ft_strlcpy(result, s1, total_len);
		ft_strlcat(result, s2, total_len);
	}
	return (result);
}
// int main()
// {
// char dest[] = "hello";
// char src[] = "world";

// printf("%s", ft_strjoin(dest, src));

// }