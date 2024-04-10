/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:04:53 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/16 11:57:43 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && (haystack[i] != '\0'))
	{
		j = 0;
		while ((i + j < len) && (haystack[i + j] == needle[j]))
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	//char	str1[] = "Foo Bar Baz";
	char	str1[] = "coucou";
	char	str2[] = "a";
	char	*a;
	char	*b;

	//Lib
	a = strnstr(str1, str2, -1);
	printf("Lib : %s\n", a);

	//Sim
	b = ft_strnstr(str1, str2, -1);
	printf("Sim : %s\n", b);

	return (0);
}*/
