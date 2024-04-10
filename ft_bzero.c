/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:04:14 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/15 15:47:53 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
//#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main()
{
    char str[30] = "ABCD EFGH";
	char str1[30] = "ABCD EFGH";
    printf("Before bzero => %s",str);
	bzero(str, -1);
	printf("\nAfter bzero => %s\n",str);

	printf("Before Simon's bzero => %s",str1);
	ft_bzero(str1, -1);
	printf("\nAfter Simon's bzero => %s\n",str1);

    return (0);
}*/
