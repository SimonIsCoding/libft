/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:00:58 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/12 10:54:16 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//int	ft_isdigit(char c);
//int	ft_isalpha(char c);
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;
	int	i;

	c = 1;
	i = ft_isalnum(c);
	printf("%d\n", i);
	return (0);
}*/
