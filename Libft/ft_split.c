/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:17:01 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/25 18:10:20 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			wc++;
		}
		if (s[i])
			i++;
	}
	return (wc);
}

static int	wordlen(char const *s, char c)
{
	int	i;
	int	wl;

	i = -1;
	wl = 0;
	while (s[++i] && s[i] != c)
		wl++;
	return (wl);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wc;
	char	**result;

	i = -1;
	j = 0;
	wc = wordcount(s, c);
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!result)
		return (NULL);
	while (++i < wc)
	{
		while (s[j] == c)
			j++;
		result[i] = ft_substr(s, j, wordlen(s + j, c));
		j += wordlen((s + j), c);
	}
	return (result);
}

// int	main(void)
// {
// 	char str[] = ",,,,,,hell o,,,,,wor ld,i s,st upid,,,,,";
// 	char **s = ft_split(str, ',');
// 	int i = 0;
// 	while (s[i])
// 		printf("|%s|\n", s[i++]);
// 	i = 0;
// 	while (s[i])
// 		free(s[i++]);
// 	free(s);	
// 	return (0);
// }