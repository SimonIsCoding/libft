/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:50:16 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/19 13:19:49 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"
//memmove is safe to use over memcpy when you have overlapping places in memory
//memcpy does not use a buffer
//memmove does use a buffer

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
    char src[30] = "ABCDEFGHijklmnopqrstuvwxyz1234";
	char dst[30] = "";// dst is only NULL characters
	char sim_dst[30] = "";
	printf("Before memmove => %s\n",dst);
	memmove(dst, src, sizeof(char) * 30);
	printf("After memmove  => %s\n",dst);//now like src

	printf("Before Simon's memmove => %s",sim_dst);
	ft_memmove(dst, src, sizeof(char) * 30);
	printf("\nAfter Simon's memmove  => %s\n",dst);

    return (0);
}*/
