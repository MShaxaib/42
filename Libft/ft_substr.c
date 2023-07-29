/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:43:31 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/29 20:26:45 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		s_len;

	if (!s)
		return (NULL);
	if (!s || !*s)
		len = 0;
	else
	{
		s_len = ft_strlen(s);
		if (s_len < len)
			len = s_len - start;
		if ((start + len) > s_len)
			len--;
		if (s_len < start || (len == (unsigned long)-1))
			len = 0;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
		*(str + len) = *(s + start + len);
	return (str);
}
// int	main(void)
// {
// 	char str[10] = "Hello";
// 	char *substring = ft_substr(str, 2, 4);
// 	if (substring != NULL)
// 	{
// 		printf("%s", substring);
// 	}
// 	return (0);
// }