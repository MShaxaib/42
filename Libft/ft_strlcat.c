/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:02:34 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/17 16:48:22 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = strlen(dst);
	srclen = strlen((char *)src);
	if (dstsize < dstlen)
		return (srclen + dstsize);
	while (dstlen + 1 < dstsize && src[j] != 0)
		dst[dstlen++] = src[j++];
	if (dstlen < dstsize)
		dst[dstlen] = '\0';
	while (src[j++] != 0)
		dstlen++;
	return (dstlen);
}

// int	main(void)
// {
// 	char dst[10] = "salam";
// 	char src[] = "sha";
// 	size_t dstsize = 10;

// 	printf("%zu\n", ft_strlcat(dst, src, dstsize));
// 	// printf("%zu", strlcat(dst, src, dstsize));
// }