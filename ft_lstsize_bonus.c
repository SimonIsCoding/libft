/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:48:02 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/22 13:51:05 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
t_list	*ft_lstnew(void	*content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>
void	ft_lstprint(t_list	*lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	int		i;
	t_list	*node1;
	t_list	*node2;
	t_list	*tmp;

	i = 0;
	node1 = ft_lstnew("a");
	node2 = ft_lstnew("b");
	ft_lstadd_front(&node1, node2);
	i = ft_lstsize(node1);
	printf("%i\n", i);
	ft_lstprint(node1);

	while (node1 != NULL)
	{
		tmp = node1;
		node1 = node1->next;
		free(tmp);
	}
	return (0);
}*/
