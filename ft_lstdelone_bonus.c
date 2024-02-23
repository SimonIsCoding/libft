/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:32:42 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/22 20:39:56 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*void	del(void *content)
{
//	write(1, "Entered in del function\n", 24);
	free(content);
//	content = "to";
}*/

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

	node1 = ft_lstnew("a");
	printf("%s\n", (char *)node1->content);
	ft_lstdelone(node1, del);
	printf("%s\n", (char *)node1->content);

	return (0);
}*/
