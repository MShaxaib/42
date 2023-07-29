/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:17:07 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/29 20:08:20 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptsrc;
	unsigned char	*ptdst;
	size_t				i;

	i = 0;
	ptsrc = (unsigned char *)src;
	ptdst = (unsigned char *)dest;
	while (ptdst > ptsrc && i < n)
		i++;
	while (i > 0)
	{
		ptdst[i - 1] = ptsrc[i - 1];
		i--;
	}
	while (ptdst < ptsrc && i < n)
	{
		if (ptdst[i] != ptsrc[i])
			ptdst[i] = ptsrc[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char str[] = "source";
// 	char dst[] = "destination";
// 	printf("%s", ft_memmove(dst, str, 3));
// 	printf("%s", "\n");
// 	printf("%s", memmove(dst, str, 3));
// 	return (0);
// }
