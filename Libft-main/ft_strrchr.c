/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:41:16 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/18 18:34:37 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int chr)
{
    int i;

    i = ft_strlen(str);
    while(i >= 0)
    {
        if (str[i] == (unsigned char)chr)
            return((char *)&str[i]);
        else
            i--;
    }
	return (NULL);
}
