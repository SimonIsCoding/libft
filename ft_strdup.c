/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:35:58 by simarcha          #+#    #+#             */
/*   Updated: 2024/03/19 12:44:06 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	i;

	i = -1;
	dst = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (str[++i] != '\0')
		dst[i] = str[i];
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char		*a;
	char		*b;
	const char	*t;

	t = "This is a test";

	//Lib
	a = strdup(t);
	printf("Lib : __%s__\n", a);

	//Sim
	b = ft_strdup(t);
	printf("Sim : __%s__\n", b);

	return (0);
}*/
