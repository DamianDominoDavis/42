/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:04:39 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/17 20:22:29 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha (int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void*	ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void*	ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void*	ft_memmove(void *dst, const void *src, size_t len);
void*	ft_memset(void *b, int c, size_t len);
char*	ft_strcat(char *restrict s1, char * restrict s2, size_t n);
char*	ft_strchr(const char *s, int c);
int		ft_strcmp(const char* s1, const char* s2);
char*	ft_strcpy(char *dst, const char *src);
char*	ft_strdup(const char *s);
size_t	ft_strlcat(char *s1, const char *s2, size_t size);
size_t	ft_strlen(const char *s);
char*	ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char* s1, const char* s2, size_t n);
char*	ft_strncpy(char * dst, const char * src, size_t n);
char*	ft_strnstr(const char *haystack, const char *needle, size_t len);
char*	ft_strrchr(const char *s, int c);
char*	ft_strstr(const char *haystack, const char *needle);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif /* LIBFT */
