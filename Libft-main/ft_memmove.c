/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:03 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 18:13:22 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	int		i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	i = 0;
	if (csrc < cdest)
	{
		while (n > 0)
		{
			n--;
			cdest[n] = csrc[n];
		}
	}
	else
	{
		while (n > 0)
		{
			cdest[i] = csrc[i];
			i++;
			n--;
		}
	}

	return (dest);
}