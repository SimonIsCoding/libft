/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:04:58 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/15 18:25:18 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//it compares both strings up to n characters
//the return value is the difference for the first different char in each str
//if both strings are identical, return value = 0

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n && n > 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[50] = "This is the way";
	char str2[50] = "This is the way";
	int	a;
	int	b;

	a = strncmp(str1, str2, 50);
	b = ft_strncmp(str1, str2, 50);
	printf("Lib : %d\n", a);
	printf("Sim : %d\n", b);
}*/
