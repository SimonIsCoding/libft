/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:45:28 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/20 18:58:22 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//memset is a function that fills memory with a constant byte (=character).
//It's often used to initialized a memory block.
//the function has three arguments:
//*b  is the pointer of the memory location
//where thee memory will be set (= starter)
//c   is the value that is to be copied to the memory block
//len is the number of bytes in the memory block which is set
//memset returns the first address of the memory block from where it starts to 
//set the value
//
//Advice You have to cast one variable

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    //char str[30] = "ABCD EFGH";
	char str1[30] = "ABCD EFGH";
    //printf("Before memset => %s",str);
	//memset(str,'x', 100);
	//printf("\nAfter memset => %s\n",str);

	printf("Before Simon's memset => %s",str1);
	ft_memset(str1, 'x', 100);
	printf("\nAfter Simon's memset => %s\n",str1);

    return (0);
}*/
