/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:27:38 by simarcha          #+#    #+#             */
/*   Updated: 2024/09/30 13:23:53 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//you have to fulfill your memory from malloc with 0
//step 0: check if everything is all right
//step 1: do malloc
//step 2: fulfill it with NULL characters 
//return the malloc argument
//the first argument is the total length of the memory
//the second argument is the size of each cells in this memory

// https://manpages.ubuntu.com/manpages/focal/man3/malloc.3.html
// NULL may also  be returned by a successful call to malloc() with a size of
//zero, or by a successful call to calloc() with count or size equal to zero.

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (count * size == 0)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	while (i < count)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	size_t			count;
	size_t			size;
	unsigned char	*res;
	unsigned char	*array;

	count = 30;
	size = 1;
	res = calloc(count, size);
	printf("Lib : __%s__\n", res);
	free(res);
	array = ft_calloc(count, size);
	printf("Sim : __%s__\n", array);
	free(array);
	return (0);
}*/
