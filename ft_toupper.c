/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:16:48 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/12 11:09:18 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	a;

	a = 'z';
	printf("Lib : %c\n", toupper(a));
	printf("Moi : %c\n", ft_toupper(a));
	return (0);
}*/
