/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:31:37 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/17 15:43:34 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}			t_list;

typedef struct s_stack
{
	t_list	*head;
	int		size;
}			t_stack;

typedef struct s_type
{
	int				init;
	int				sec;
	int				prev;
}	t_type;

// list
void	ft_lstadd_back(t_list **lst, int content, int index);
t_list	*ft_lstnew(int content, int index);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
t_list	*ft_lst_beforelast(t_list *lst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

// libft
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str, t_list **a);
int		ft_isdigit(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

// native
void	parse(int argc, char **argv, t_stack *a);
void	index_it(t_stack *a);
t_list	*get_max(t_list *stack);
t_list	*get_min(t_list *stack);
void	ft_exit(int n, t_list **a, t_list **b);
void	free_2d(char ***data);
int		sorted(t_list *a);
void	sort_three(t_list **a);
void	sort_five(t_stack *a, t_stack *b);
void	push_to_b(t_stack *a, t_stack *b);
void	push_to_a(t_stack *a, t_stack *b, int *boolean);
void	init_algo(t_stack *a, t_stack *b);

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
void	checker(t_stack *a);

#endif