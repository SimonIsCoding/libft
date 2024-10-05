/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:24:51 by simarcha          #+#    #+#             */
/*   Updated: 2024/10/05 21:50:04 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//the order really matters!
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
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
	t_list	**node1;
	t_list	*node2;
	t_list	*tmp;

	node1 = malloc(sizeof(t_list *));
	if (!node1)
		return (1);
	*node1 = ft_lstnew("a");
	node2 = ft_lstnew("b");
	ft_lstadd_front(node1, node2);
	ft_lstprint(*node1);

	while (*node1 != NULL)
	{
		tmp = *node1;
		*node1 = (*node1)->next;
		free(tmp);
	}
	free(node1);
	return (0);
}*/
