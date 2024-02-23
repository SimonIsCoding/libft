/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:38:59 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/23 12:33:16 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*node1;

	node1 = malloc(sizeof(t_list));
	if (!node1)
		return (NULL);
	node1->content = content;
	node1->next = NULL;
	return (node1);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	t_list	*tmp;

	if (!lst || !del || !f)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		new_node = ft_lstnew(tmp);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void *f(void *content) 
{
	size_t	i;
    char	*str;
    size_t	len;
    char	*new_str;

	str = (char *)content;
	len = ft_strlen(str);
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (++i < len)
        new_str[i] = ft_toupper(str[i]);
    new_str[len] = '\0';

    return (new_str);
}

#include <stdio.h>
void print_list(t_list *lst)
{
    while (lst != NULL)
	{
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int main(void)
{
    t_list	*lst;

	lst = ft_lstnew("Hello");
    ft_lstadd_back(&lst, ft_lstnew("World"));
    ft_lstadd_back(&lst, ft_lstnew("from"));
    ft_lstadd_back(&lst, ft_lstnew("the"));
    ft_lstadd_back(&lst, ft_lstnew("other"));
    ft_lstadd_back(&lst, ft_lstnew("side"));

    t_list *mapped_lst = ft_lstmap(lst, f, free);

    print_list(lst);
    printf("Transformed List:\n");
    print_list(mapped_lst);

	//We free to avoid leaks
    ft_lstclear(&mapped_lst, free);

    ft_lstclear(&lst, free);//free node not allocated
    return (0);
}*/
