/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:27:25 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/15 17:51:25 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <sys/errno.h>
#include "libft.h"
//we want to convert str into a int. str should start by a number with a 
//maximum of 1 sign before him. Otherwise it returns 0

int	ft_atoi(const char *str)
{
	int		a;
	int		i;
	int		sign;

	i = 0;
	a = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' && sign == 1)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		a = a * 10 + (str[i++] - 48);
	return (a * sign);
}

//you may have to include before the last return
//if (errno != 0)
//return (-1);
/*
int	main(void)
{
	//const char	str1[] = "89589565656565656531111";
	//const char		str1[] = "9223372036854775807";//max long long value
	//const char		str1[] = "-9223372036854775808";//min long long value
	//const char			str1[] = "9200000000000000000";
	const char		str1[] = "+-123";
	int				a;
	int				b;
	//int				c;

	a = atoi(str1);
	printf("Lib : %d\n", a);
	b = ft_atoi(str1);
	printf("Sim : %d\n", b);
	//c = gh_atoi(str1);
	//printf("Git : %d\n", c);
	return (0);
}*/
//your atoi is almost good but return weird values with big numbers
//ask for help
