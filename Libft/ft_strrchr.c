/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:13:25 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/10 18:23:06 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	else
		return (NULL);
}
int	main(void)
{
	char *str;

	printf("%s\n", (strrchr(str, '\0')));
	printf("%s\n", (ft_strrchr(str, '\0')));
	return (0);
}