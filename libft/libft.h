/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:55:27 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/21 14:50:18 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h> //printf
# include<stddef.h> //size_t
# include<string.h> // str...
# include<ctype.h> //toupper tolower is...
# include<stdlib.h> // atoi
# include<unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	*ft_memset(void *ptr, int val, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_memchr(const void *s, int check, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nb, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *str, void (*ft)(unsigned int, char *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

int		ft_atoi(const char *str);
int		ft_isalnum(int nb);
int		ft_isalpha(int nb);
int		ft_isascii(int c);
int		ft_isdigit(int nb);
int		ft_isprint(int nb);
int		ft_strncmp(const char *s1, const char *s2, size_t nb);
int		ft_toupper(int str);
int		ft_tolower(int str);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
int		ft_lstsize(t_list *lst);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);
size_t	ft_strlcat(char *dst, const char *src, size_t siz);

char	*ft_strchr(const char *str, int param);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *str, int param);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *str, unsigned int start, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *str, char (*ft)(unsigned int, char));
char	**ft_split(char const *str, char c);

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
