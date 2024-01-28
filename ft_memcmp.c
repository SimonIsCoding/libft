/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:07:23 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/21 11:16:30 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hillo";
	int		a;
	int		b;

	//Lib
	a = memcmp(str1, str2, 8);
	printf("Lib : %d\n", a);

	//Sim
	b = ft_memcmp(str1, str2, 8);
	printf("Sim : %d\n", b);

	return (0);
}*/
