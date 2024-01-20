/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:52:51 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/20 14:55:58 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}			t_list;

typedef struct s_stack
{
	t_list	*head;
	int		size;
}			t_stack;

// list
void	ft_lstadd_back(t_list **lst, int content);
t_list	*ft_lstnew(int content);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
t_list	*ft_lst_beforelast(t_list *lst);
int		ft_lstsize(t_list *lst);

// utils
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str, t_list **a);
int		ft_isdigit(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

// native
void	parse(int argc, char **argv, t_stack *a);
void	ft_exit(int n, t_list **a, t_list **b);
void	free_2d(char ***data);
int		sorted(t_list *a);

// swap push
int		swap(t_list **stack);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
int		rotate(t_list **stack);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
int		reverse_rotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// checker
void	checker(t_stack *a, t_stack *b);
int		ft_strcmp(char *s1, char *s2);

// get_next_line
char	*chyatacheck(char *chyata, char **readbuf);
char	*readfile(char	**chyata, char *buf, char **readbuf, int fd);
int		newline(char *buf);
char	*ft_strcpy(char *s1, char *s2);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);
char	*get_next_line(int fd);
char	*ft_realloc(char *str, int xtrsize);
char	*ft_strdup(const char *s1);
char	*package(char **chyata, char *buf, char *readbuf);

#endif