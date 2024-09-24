/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:43:10 by simarcha          #+#    #+#             */
/*   Updated: 2024/06/21 15:22:33 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlcpy function copies/crushes src into dst up to n - 1 (= here size - 1) 
//values saving the Null terminated characters
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	int	a;
	int	b;
	char	dst[] = "This is a test";
	const char	src[20] = "";
	char	sim_dst[] = "This is a test";

	b = strlcpy(dst, src, 0);
	printf("Lib : %s\n", dst);
	printf("Lib : %d\n", b);

	a = ft_strlcpy(sim_dst, src, 0);
	printf("Sim : %s\n", sim_dst);
	printf("Sim : %d\n", a);
	return (0);
}*/
