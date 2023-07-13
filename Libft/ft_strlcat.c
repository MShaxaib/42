/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:02:34 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/11 19:51:06 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	
	i = ft_strlen(dst);

	while(*dst)
	{
		src[j] + dst[i];
		
	}
	return(0);
}
int main()
{
	char src[] = "Hello";
	char dst[] = "world";
	
	printf("%zu/n", ft_strlcat(dst, src, 1));
	printf("%zu/n", ft_strlcat(dst, src, 1));
		
}