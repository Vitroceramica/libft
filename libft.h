#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, int n);
void	*ft_memset(void *str, int c, int n);
char	*ft_strrchr (char *str, int c);
char	*ft_strnstr(char *str, char *s, int len);
int		ft_toupper(int c);
int		ft_tolower(int c);
void 	*ft_memcpy(void *dest, void * src, int size);
int		ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
int		ft_strlcpy(char *dst, char *src, int size);
int		ft_strlcpy(char *dst, char *src, int size);
void	*ft_memchr(void *str, int c, int n);
void	*ft_memccpy(void *dest, void * src, int c, int size);
void	*ft_memmove(void *dest, void *src, int size);
int		ft_memcmp (void *str1, void *str2, int n);
int		ft_strncmp(char *str1, char *str2, int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_calloc(int nitems, int size);
char	*ft_strdup(char *string);

#endif