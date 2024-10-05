/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:59:00 by simarcha          #+#    #+#             */
/*   Updated: 2024/10/05 23:15:00 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*void	del(void *content)
{
//	write(1, "entered", 8);
	free(content);
//	content = "to";
}*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst)
		return ;
	if (!(*lst))
	{
		ft_lstdelone((*lst), del);
		*lst = NULL;
		return ;
	}
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*
//to test our function ft_lst_clear:
//we want a function that creates nodes
//we want a function that link nodes
//we want to display every nodes
//we want to clear everything => print it in the main

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	ft_lstadd_front(&node1, node2);
	ft_lstprint(node2);
	ft_lstclear(&node2, del);
	printf("lst cleared\n");
	ft_lstprint(node2);//Doesn't print because it lst == NULL
	return (0);
}*/
