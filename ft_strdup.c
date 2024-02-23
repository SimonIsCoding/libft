/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:35:58 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/01 21:30:14 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"
//we call the function ft_strlcpy into ft_strdup to crush the values of the 
//memory to copy them

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, i);
	return (str);
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
