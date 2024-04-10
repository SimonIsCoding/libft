/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:34:18 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/21 15:46:39 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	printf("%s\n", (char *)new_node->content);
	printf("%s\n", (char *)new_node->next);

	free(new_node);
	return (0);
}*/
