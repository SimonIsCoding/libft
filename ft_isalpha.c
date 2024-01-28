/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:33:26 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/09 13:31:57 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;
	int	i;

	c = 5;
	i = ft_isalpha(c);
	printf("%d\n", i);
	return (0);
}*/
