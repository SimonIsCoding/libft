/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:19:07 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/14 18:44:46 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"
//first arg: destination address
//secnd arg: source adress
//third arg: number of byte to copy
//the goal for memcpy is to copy/crush exaclty what's in src to dst up to n byt
//the function return the dst string

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int main()
{
    char src[30] = "ABCDEFGHijklmnopqrstuvwxyz1234";
	char dst[30] = "";// dst is only NULL characters
	char sim_dst[30] = "";

	printf("Before Lib memcpy => %s\n",dst);
	memcpy(dst, src, sizeof(char) * 30);
	printf("After Lib memcpy  => %s\n",dst);//now like src

	printf("Before Simon's memcpy => %s\n",sim_dst);
	ft_memcpy(sim_dst, src, sizeof(char) * 30);
	printf("After Simon's memcpy  => %s\n", sim_dst);

    return (0);
}*/
