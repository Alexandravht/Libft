/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:43:00 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/10 20:13:49 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t		len1;
	size_t		i;

	len1 = start - len;
	dest = (char*)malloc(sizeof(char) * (len1 +1));
	i = len;

	while (i < start && (*(s + i)) != '\0')
	{
		*dest = *(s + i);
		i++;
		dest++;
	}

	*dest = '\0';

	return (dest-len);
}