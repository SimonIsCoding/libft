/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:48:32 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/17 18:53:06 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//for ft_strtrim function: if set or the string doesn't exist, just return NULL
//on creer une fonction check-char pour savoir si le caractere est dans notre 
//string 
//#include <stddef.h>
//#include <stdlib.h>
#include "libft.h"

static int	check_char(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while ((s1[start] != '\0') && (check_char(set, s1[start]) == 1))
		start++;
	end = len(s1);
	while ((end > start) && (check_char(set, s1[end - 1]) == 1))
		end--;
	str = ft_calloc(sizeof(char), (end - start + 1));
	if (!(str))
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	const char s1[100] = "abababHolaMundoababab";
	char const set[100] = "ab";
	char *str;
	str = ft_strtrim(s1, set);
	printf("len empty string = %zu\n", len(set));
	printf("final string : __%s__\n", str);
	return(0);
}*/
