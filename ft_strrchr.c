/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:45:17 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/16 10:24:34 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((char)c == str[i])
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdlib.h>

int	main(void)
{
	char tweet[] = "teste";
	char *mention = strrchr(tweet, '\0');
	printf("Lib: __%s__\n", mention);
	char *simon = ft_strrchr(tweet, '\0');
	printf("Sim: __%s__\n", simon);
	//char *empty = (char *)calloc(1, 1);

	if(strrchr(empty,'V') == NULL)
		printf("strrch + NULL\n");
	else
		printf("strrch NO  NULL\n");

	if(ft_strrchr(empty,'V') == NULL)
		printf("ft_strrch + NULL\n");
	else
		printf("ft_strrch NO  NULL\n");
	
	printf("Lib : %p\n", mention);
	printf("Sim : %p\n", simon);
	return (0);
}*/
