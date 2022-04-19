/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:25:44 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/28 09:27:40 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int i);

int		ft_isdigit(int i);

int		ft_isalnum(int i);

int		ft_isascii(int i);

int		ft_isprint(int i);

int		ft_toupper(int i);

int		ft_tolower(int i);

t_size	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, t_size n);

void	*ft_memcpy(void *dest, const void *src, t_size n);

void	*ft_memmove(void *dest, const void *src, t_size n);

void	ft_bzero(void *s, t_size n);

t_size	ft_strlcpy(char *dest, const char *src, t_size destsize);

t_size	ft_strlcat(char *dest, const char *src, t_size destsize);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, t_size n);

int		ft_memcmp(const void *s1, const void *s2, t_size n);

void	*ft_memchr(const void *str, int character, t_size n);

char	*ft_strnstr(const char	*big, const char *little, t_size len);

int		ft_atoi(const char *str);

void	*ft_calloc(t_size count, t_size size);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, t_size len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *string, char (*function)(unsigned int, char));

void	ft_striteri(char *string, void (*function)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *string, int fd);

void	ft_putendl_fd(char *string, int fd);

void	ft_putnbr_fd(int number, int fd);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **alst, t_list *new);

void	ft_lstadd_front(t_list **alst, t_list *new);

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*function)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*function)(void *), void (*del)(void *));
#endif
