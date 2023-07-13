/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshazaib <mshazaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:59:31 by mshazaib          #+#    #+#             */
/*   Updated: 2023/07/09 20:04:42 by mshazaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
#define _LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_isaplha(char a);
int		ft_isdigit(int a);
size_t	ft_strlen(char const *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);

#endif