/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:35:53 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/22 13:51:52 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <unistd.h>

#include <stdio.h>
void	f(void *content)
{
	printf("%s\n", (char *)content);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		tmp = lst;
		f(tmp->content);
		lst = lst->next;
	}
}
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst) || !new)
		return ;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
}

#include <stdio.h>
void	ft_lstprint(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*tmp;

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	ft_lstadd_back(&node1, node2);

	ft_lstiter(node1, f);

	while (node1 != NULL)
	{
		tmp = node1;
		free(tmp);
		node1 = node1->next;
	}
	return (0);
}*/
