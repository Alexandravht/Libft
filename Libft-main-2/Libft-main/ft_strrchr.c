/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:41:16 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/14 19:54:25 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int chr)
{
    int i;

    i = ft_strlen(str);
    while(i > 0)
    {
        if (str[i] == (unsigned char)chr)
            return((char *)&str[i]);
        else
            i--;
    }
	if(str[i] == (unsigned char)chr)
		return((char *)&str[i]);
	else
		return (NULL);
}
