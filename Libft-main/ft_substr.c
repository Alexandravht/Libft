/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:43:00 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:46:09 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		len1;
	int		i;

	len1 = start - len;
	dest = (char*)malloc(sizeof(char) * (len1 +1));
	i = len;

	while (i < start && (*(src + i)) != '\0')
	{
		*dest = *(src + i);
		i++;
		dest++;
	}

	*dest = '\0';

	return (dest-len)
}

/*
- s: La chaîne de laquelle extraire la nouvelle chaîne.
- start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
- len: La taille maximale de la nouvelle chaîne.

Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len’
*/
