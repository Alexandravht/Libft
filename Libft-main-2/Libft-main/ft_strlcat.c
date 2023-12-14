/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:48:39 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/10 20:09:25 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	len_dst;
	int len_src; 
	
	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size > 0 || dst[i])
	{
		while (src[i] && i < (len_dst - 1))
		{
			dst[len_dst] = src[i];
			i++;
			len_dst++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (dst[i])
		i++;
	return (len_dst + len_src);
}