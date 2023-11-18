/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:46:50 by alvohnou          #+#    #+#             */
/*   Updated: 2023/11/18 00:47:58 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	i = 0;

	if (size > 0) // Tant que la taille est supérieure à 0
	{
		while(src[i] && i < (size - 1)) // La fonction strlcpy() copie jusqu'à la taille - 1 caractères de la chaîne src
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0'; // Terminant le résultat par NUL
	}
	i = 0;
	while (src[i])
		i++;
	return (src); // Renvoie la longueur totale de la chaîne qu'elles ont essayé de créer. Pour strlcpy(), cela signifie la longueur de src
}
