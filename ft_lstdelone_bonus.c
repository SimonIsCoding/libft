/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:32:42 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/24 20:35:13 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *content)
{
	free(content);
	content = NULL;
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
	lst = NULL;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*node1;

	node1 = ft_lstnew(ft_strdup("a"));
	printf("%s\n", (char *)node1->content);
	printf("%p\n", (char *)node1->content);
	ft_lstdelone(node1, del);
	printf("%s\n", (char *)node1->content);
	printf("%p\n", (char *)node1->content);

	return (0);
}*/
