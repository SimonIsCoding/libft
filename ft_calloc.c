/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:27:38 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/17 12:07:43 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"
//you have to fulfill your memory from malloc with 0
//step 1: do malloc
//step 2: use ft_bzero 
//return the malloc argument
//the first argument is the total length of the memory
//the second argument is the size of each cells in this memory

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (void *)malloc(count * size);
	if (!(str))
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t	a;
	size_t	b;
	unsigned char	*res;

	a = 100;
	b = sizeof(int);
	res = calloc(a, b);
	printf("Lib : __%s__\n", res);
	
	int	*array;

	array = ft_calloc(100, sizeof(int));
	printf("Sim : __%s__\n", (char *)array);
	free(array);

	return (0);
}*/
