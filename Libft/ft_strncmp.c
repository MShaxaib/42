/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:35:33 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/29 20:54:48 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char c1;
	unsigned char c2;
	
	while (n > 0)
	{
	c1 = (unsigned char)*s1;
	c2 = (unsigned char)*s2;

		if (c1 != c2)
		{
			return (c1 - c2);
		}
		else if (c1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "worlds";

// 	printf("%d\n", strncmp(s1, s2, 5));

// 	printf("%d", ft_strncmp(s1, s2, 5));
// 	return(0);
// }