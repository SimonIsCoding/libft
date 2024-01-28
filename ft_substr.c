/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:11:25 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/20 20:52:31 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//we copy s into a malloc string from start up to start + len

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s + start);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (len-- > 0)
		str[len] = s[start + len];
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*res;
	char const *s = "This is a test";
	unsigned int start = 3;
	size_t len = 5;
	res = ft_substr(s, start, len);
	printf("%s\n", res);
	return (0);
}*/
