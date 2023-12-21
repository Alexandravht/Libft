/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:46:50 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 19:25:31 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	int len_src;
	i = 0;
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while(src[i] && i < (size - 1)) 
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0'; 
	}
	return (len_src); 
}
