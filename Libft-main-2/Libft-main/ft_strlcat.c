/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:48:39 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 12:24:01 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len_dst;
	size_t len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);

	while (src[i] && len_dst + i < size - 1 && size > len_dst)
	{
		dst[len_dst + i] = src[i];
		i++;
	}

	if (size > 0 && len_dst < size)
	{
		dst[len_dst + i] = '\0';
		return len_dst + len_src;
	}

	if (size <= len_dst)
		return size + len_src;

	return len_dst + len_src;
}
/*
	if (size == 0)
		return (len_dst);
	if (size <= len_src)
	{
		while (i < size)
		{
			dst[i + len_dst] = src[i];
			i++;
		}
	}
	else
		while (i < len_dst)
		{
			dst[i + len_dst] = src[i];
			i++;
		}
	dst[i + len_dst] = 0;
	return (len_dst + i);
}*/
/*
#include <stdio.h>
int main()
{
	char	dest[30] = "Marco Verratti";
    char	*src1 = "AAAAAAAAA";

	size_t	i = ft_strlcat(dest, src1, 4);
	printf("i : %ld", i);
}*/