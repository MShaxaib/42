/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:15:22 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/18 21:04:53 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

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

	str = (char *)malloc(sizeof(src));
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