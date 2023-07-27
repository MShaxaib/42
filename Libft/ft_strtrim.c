/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:04:58 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/25 19:26:38 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*result;

	result = 0;
	front = 0;
	if (set == 0 || *set == '\0')
	{
		return (strdup((char *)s1));
	}
	if (s1 != 0)
	{
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
		{
			front++;
		}
		while (rear > front && ft_strchr(set, s1[rear - 1]))
		{
			rear--;
		}
		result = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (result)
		{
			ft_strlcpy(result, &s1[front], rear - front + 1);
			result[rear - front] = '\0';
		}
	}
	return (result);
}

// int	main(void)
// {
// 	char s1[] = "   xxx   xxx";
// 	char s2[] = " x";

// 	printf("%s", ft_strtrim(s1, s2));
// }