/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:48:39 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/14 23:28:28 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int	len_dst;
	int len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size > 0 || dst[i])
	{
		while (src[i] && (int)i < (len_dst - 1) && i < size)
		{
			dst[len_dst] = src[i];
			i++;
			len_dst++;
		}
		dst[i] = '\0';
	}
	return (len_dst + i);
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
