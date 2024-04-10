/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:39:31 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/20 20:55:10 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ctr(long num)
{
	size_t	ctr;

	ctr = 0;
	while (num < 0)
	{
		num *= -1;
		ctr++;
	}
	while (num > 0)
	{
		num /= 10;
		ctr++;
	}
	return (ctr);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	tmp;
	size_t	len;

	tmp = n;
	len = ft_ctr(tmp);
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc((len + 1) * (sizeof(char)));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (tmp < 0)
	{
		tmp *= -1;
		str[0] = '-';
	}
	while (tmp > 0)
	{
		str[len--] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	n = +24;
	char *res;
	res = ft_itoa(n);
	//int	nn = 0;
	//int nnn = -2147483648;
	//int nnnn = 65543767;
	//long m = -2147483649;

	printf("Num %d: %s\n", n, ft_itoa(n));
	//printf("Num %d: %s\n", nn, ft_itoa(nn));
	//printf("Num %d: %s\n", nnn, ft_itoa(nnn));
	//printf("Num %d: %s\n", nnnn, ft_itoa(nnnn));
	//printf("Num %ld: %s\n", m, ft_itoa(m));
	printf("%s\n", res);
	return (0);
}*/
