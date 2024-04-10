/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:20:07 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/23 17:02:51 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void example_function(unsigned int index, char *character)
{
	index = 0;
    *character = 'X';
}

int main(void) 
{
    char str[] = "Hello, World!";
	printf("Initial string:  __%s__\n", str);
    ft_striteri(str, &example_function);
    printf("Modified string: __%s__\n", str);
    return (0);
}*/
