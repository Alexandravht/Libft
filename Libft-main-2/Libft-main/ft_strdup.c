/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:23:09 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/07 21:40:26 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = malloc(ft_strlen((char *)s1) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
