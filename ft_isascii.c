/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:25:14 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/14 11:28:53 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c < 128 && c >= 0)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = -3;
	printf("%d\n", isascii(c));
	printf("%d\n", ft_isascii(c));
	return (0);
}*/
