/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:23:50 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/15 20:24:58 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	i = 0;
	a = 0;
	while (dst[a] != '\0' && a < size)
		a++;
	if (size != 0 && a < size - 1)
	{
		while (src[i] != '\0' && i < (size - a - 1))
		{
			dst[a + i] = src[i];
			i++;
		}
		dst[a + i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (a + i);
}
/*
int main() {
    // Chaînes source et destination
    char destination[100] = "Hello, ";
    const char *source = "world!";
    //char sim_dst[100] = "Hello, ";
    //const char *sim_src = "world!";

    // Utilisation de strlcat pour concaténer les chaînes
    size_t result = strlcat(destination, source, 10);

    // Affichage du résultat
    printf("Résultat de strlcat : %s\n", destination);
    printf("Taille totale de la chaîne : %zu\n", result);

	size_t result_simon = ft_strlcat(sim_dst, sim_src, 10);
	
    // Affichage du résultat
    printf("Résultat de Simon's strlcat : %s\n", sim_dst);
    printf("Taille totale de la Simon's chaîne : %zu\n", result_simon);
    return 0;
}*/
