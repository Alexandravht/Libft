/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:41:42 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 11:52:31 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char*)haystack);
	while(haystack[i] && i < len)
	{
		j = 0;
		while(haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
		{
			ret = &((char *)haystack)[i];
			return (ret);
		}
	i++;
	}
	return(NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "";
	char *str1 = "";
	char *resultat = ft_strnstr(str, str1, 42);
	printf("resultat ft : %s\n", resultat);
}*/