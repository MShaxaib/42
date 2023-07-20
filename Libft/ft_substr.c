/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:43:31 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/20 21:15:35 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				orignal_len;
	char			*newstring;
	unsigned int	i;
	int				j;
	int				actual_length;

	j = 0;
	actual_length = 0;
	orignal_len = 0;
	i = 0;
	orignal_len = ft_strlen(s);
	if (start < 0)
		return (NULL);
	while (s[i] && i < start + len)
	{
		actual_length++;
		i++;
	}
	newstring = (char *)malloc((actual_length + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	i = start;
	while (s[i] && i < start + len)
	{
		newstring[j] = s[i];
		i++;
		j++;
	}
	newstring[j] = '\0';
	return (newstring);
	free(newstring);
}
// int	main(void)
// {
// 	char str[10] = "Hello";
// 	char *substring = ft_substr(str, 2, 4);
// 	if (substring != NULL)
// 	{
// 		printf("%s", substring);
// 		free(substring);
// 	}
// 	return (0);
// }