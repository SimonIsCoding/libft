/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:46:27 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/20 17:05:03 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
		write(fd, &s[i], 1);
}
/*
int	main(void)
{
	char	s[30] = "This is a test";
	ft_putstr_fd(s, 1);
	return (0);
}*/
