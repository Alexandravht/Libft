/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:06 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/07 21:24:09 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *str, int chr)
{
    int i ;
    i = 0;

    while(str[i])
    {
        if (str[i] == chr)
            return(&str[i])
        else
            i++;
    }
    return(0);
}
