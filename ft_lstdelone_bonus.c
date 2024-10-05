/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:32:42 by simarcha          #+#    #+#             */
/*   Updated: 2024/10/05 23:04:55 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
	content = NULL;
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
	lst = NULL;
}

/*#include <stdio.h>
int	main(void)
{
	t_list	**node1;
	char	*content;

	node1 = NULL;
	content = ft_strdup("a");
	*node1 = ft_lstnew(content);
	printf("content        %p\n", content);
	printf("node1->content %p\n", (*node1)->content);
	printf("node1          %p\n", *node1);
	printf("%s\n", (char *)(*node1)->content);
	printf("calling ft_lstdelone\n");
	ft_lstdelone(*node1, del);
	printf("it will give us segfault because now the ppointer is freed");
//	printf("node1          %p\n", *node1);
//	printf("node1->content %p\n", (*node1)->content);
	printf("%s\n", (char *)node1->content);

	return (0);
}*/
