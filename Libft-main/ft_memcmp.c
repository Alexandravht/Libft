/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:18:57 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/01 17:42:01 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n);
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;

    while(i < n)
    {
        if(str1[i] != str2[i])
            return(str1[i] - str2[i]);
        i++;
    }
    return(str1[i] - str2[i]);
}

/* MANUEL MEMCHR
     #include <string.h>
     int memcmp(const void *s1, const void *s2, size_t n);

    La fonction memcmp() compare la chaîne d'octets s1 avec la chaîne d'octets s2. On suppose que les deux chaînes ont une longueur de n octets.
*/