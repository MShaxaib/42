/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:36:52 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/11 20:40:08 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int res;
	int sgn;

	i = 0;
	res = 0;
	sgn = 1;

if(str[0] == '-')	
	{
		sgn = -1;
		i++;
	}
while(str[i] != '\0')
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return(sgn*res);	
}
// int main()
// {
// 	char str[] = "-2147483647";
// 	printf("%d", ft_atoi(str));
// 	return(0);
// }