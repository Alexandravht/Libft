/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:02:20 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/07 22:30:20 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ret;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	ret = malloc(((len1 + len2 + 1) * sizeof(char)));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, len1);
	ft_strlcat(ret, s2, (len1 + len2));
	return (ret);
}
