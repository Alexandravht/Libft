/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:48:39 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:46:07 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dst);
	if (size > 0 || dst[i])
	{
		while (src[i] && i < (len - 1))
		{
			dst[len] = src[i];
			i++;
			len++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (dst[i])
		i++;
	return (dst);
}
// Tant que la taille est supérieure à 0 ou tant qu'il y a au moins un octet libre dans dst
// La fonction strlcat() ajoute la chaîne src terminée par NUL à la fin de dst. Il ajoutera au maximum la taille - strlen (dst) - 1 octet, NUL terminant le résultat.
// Renvoie la longueur initiale de dst plus la longueur de src
