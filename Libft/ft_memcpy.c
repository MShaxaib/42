/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:49:18 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/18 18:56:48 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptsrc;
	unsigned char	*ptdst;
	int				i;

	i = -1;
	ptsrc = (unsigned char *)src;
	ptdst = (unsigned char *)dst;
	while (++i < (int)n)
	{
		ptdst[i] = ptsrc[i];
	}
	return (dst);
}

// int	main(void)
// {
// 	char str[] = "123456";
// 	char dst[] = "helloo";
// 	printf("%s", ft_memcpy(dst, str, 3));
// 	printf("%s", "\n");
// 	printf("%s", memcpy(dst, str, 3));
// 	return (0);
// }