/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:15:32 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/30 18:26:43 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*f;
	int				i;

	i = -1;
	f = (unsigned char *)b;
	while (++i < (int)len)
		f[i] = c;
	return (b);
}
