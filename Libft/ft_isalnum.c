/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:58:26 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/17 19:05:29 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || (a >= '0' && a <= '9'))
	{
		return (1);
	}
	return (0);
}
// int main (void)
// {
// 	ft_isalnum(1);
// 	return(0);
// }