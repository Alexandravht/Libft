/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:41:42 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/07 22:00:42 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char*)haystack);
	i = 0;
	while(haystack[i] && i < len)
	{
		j = 0;
		while(haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (needle[j])
		{
			ret = &((char *)haystack)[i];
			return (ret);
		}
	i++;
	}
	return(NULL);
}
