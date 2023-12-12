/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:06 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/10 20:05:10 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int chr)
{
    int i ;
    i = 0;

    while(str[i])
    {
        if (str[i] == chr)
            return((char *)&str[i]);
        else
            i++;
    }
    return(0);
}
