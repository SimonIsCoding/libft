/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:22:30 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/21 11:16:44 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//look for c in *s within n first characters
//if you have the same string and you are looking for a certain c after the nth
//char, the functions returns (null)
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uc;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
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
	char data[] = "hola";
	char *pos = memchr(data, 'a', 5);
	printf("Lib : %s\n", pos);

	char *pos_sim = ft_memchr(data, 'a', 5);
	printf("Sim : %s\n", pos_sim);
	return (0);
}*/
