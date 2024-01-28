/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:29:27 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/16 17:58:08 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)c == (unsigned char)str[i])
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)c == (unsigned char)str[i])
		return ((char *)str + i);
	return (NULL);
}
/*
int	main(void)
{
	char tweet[] = "tripouille"; 
	char *mention = strchr(tweet, 0);
	printf("mention: __%s__\n", mention);
	char *simon = ft_strchr(tweet, 0);
	printf("Simon's: __%s__\n", simon);

	//printf("Lib : %p\n", mention);
	//printf("Sim : %p\n", simon);

	//mention[0] = '*';
	//printf("%s\n", tweet);
}*/
