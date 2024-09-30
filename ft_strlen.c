/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:42:05 by simarcha          #+#    #+#             */
/*   Updated: 2024/09/30 12:09:25 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strlen's goal is to count the number of letter within a string called s
//if *s is NULL, the strlen from the string.h gives us SEGFAULT
//In my case, I protected *s returning (null), if it doesn't exist

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>
//%zu because strlen is type size_t
int	main(void)
{
	const char	str[14] = "This is a test";

	printf("LIB: %zu\n", strlen(str));
	printf("ME : %zu\n", ft_strlen(str));
	return (0);
}*/
