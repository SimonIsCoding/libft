/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:19:07 by simarcha          #+#    #+#             */
/*   Updated: 2024/09/30 12:08:52 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//first arg: destination address
//secnd arg: source adress
//third arg: number of byte to copy
//the memcpy's goal is to copy/crush exaclty what's in src to dst up to n bytes
//the function return the dst string
//if *dst or *src are NULL, the memcpy from the string.h gives us SEGFAULT
//In my case, I protected *dst and *src returning (null), if they don't exist

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!d || !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[30] = "ABCDEFGHijklmnopqrstuvwxyz1234";
	char dst[30] = "";// dst is empty
	char sim_dst[30] = "";

	printf("Before Lib memcpy => _%s_\n",dst);
	//memcpy(dst, src, sizeof(char) * 30);
	printf("After Lib memcpy  => _%s_\n",dst);//now like src

	printf("Before Simon's memcpy => _%s_\n",sim_dst);
	ft_memcpy(sim_dst, src, sizeof(char) * 30);
	printf("After Simon's memcpy  => _%s_\n", sim_dst);

    return (0);
}*/
