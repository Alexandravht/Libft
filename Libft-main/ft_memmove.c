/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:03 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/07 21:19:42 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	int		i;
	int		j;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	j = ft_strlen(csrc);
	while (csrc[i] != '\0' && (size_t)i < n)
	{
		if (ft_strlen(csrc) >= ft_strlen(cdest))
		{
			cdest[i] = csrc[i];
			i++;
		}
		else
		{
			cdest[i] = csrc[j];
			i--;
		}
	}
	return (cdest);
}
