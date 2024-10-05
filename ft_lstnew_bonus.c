/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:34:18 by simarcha          #+#    #+#             */
/*   Updated: 2024/10/05 23:03:39 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The goal of this function is to create a new node (=called lst) and to insert
//the content in it
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
/*
#include <stdio.h>
int	main(void)
{
	t_list *new_node = ft_lstnew("a");
	printf("new_node->content: %s\n", (char *)new_node->content);
	printf("new_node->next points to: %p (memory address)\n", new_node->next);

	free(new_node);
	return (0);
}*/
