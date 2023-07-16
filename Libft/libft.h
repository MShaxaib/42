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

//string check

int	    ft_isprint(int a);
int		ft_isaplha(char a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
size_t	ft_strlen(char const *str);
void	*ft_bzero(void *s, size_t n);
int	    ft_isascii(int a);

//string edit

int		ft_toupper(int c);
int		ft_tolower(int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
int     ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strrchr(const char *s, int c);




//mem related

void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);


#endif