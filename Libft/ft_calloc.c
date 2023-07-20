/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:32:22 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/18 21:12:36 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = malloc(count * size);
	if (str != NULL)
	{
		ft_bzero(str, count * size);
	}
	return (str);
}
// int main()
// {
// 	printf("%s", ft_calloc(SIZE_MAX, SIZE_MAX));
// 	return(0);
// }