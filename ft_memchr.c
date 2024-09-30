/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:22:30 by simarcha          #+#    #+#             */
/*   Updated: 2024/09/30 12:08:34 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//look for c in *s within n first characters
//if you have the same string and you are looking for a certain c after the nth
//char, the functions returns (null)
//if *s is NULL, the memchr from the string.h gives us SEGFAULT
//In my case, I protected *s returning (null), if it doesn't exist

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *data = NULL;
	//char data[14] = "hola que tal?";
	//char *pos = memchr(data, 'a', 5);
	//printf("Lib : %s\n", pos);

	char *pos_sim = ft_memchr(data, 'a', 5);
	printf("Sim : %s\n", pos_sim);
	return (0);
}*/
