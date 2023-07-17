/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:46:18 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/05 18:43:55 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*f;
	int				i;

	i = -1;
	f = (unsigned char *)s;
	while (++i < n)
		f[i] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char str[] = "123456";
// 	printf("%s", ft_bzero(str,4));
// 	return (0);
// }
