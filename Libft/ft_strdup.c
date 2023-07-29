/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:15:22 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/29 19:59:51 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;
	size_t len;

	len = ft_strlen(src) + 1;
	str = (char *)malloc(len);
	if (str == NULL)
	{
		return (NULL);
	}
	str = ft_strcpy(str, src);
	return (str);
}
// int main (void)
// {

// char *str = "hello";

//     printf("%s", ft_strdup(str));
//     return (0);
// }