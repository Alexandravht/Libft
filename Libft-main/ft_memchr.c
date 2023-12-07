/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:54:52 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:46:00 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n);
{
    size_t i;
    unsigned char *s1;
    unsigned char c1; 

    i = 0;
    s1 = (unsigned char *)s;
    c1 = (unsigned char)c;

    while(i < n)
    {
        if(s1[i] == c1)
            return(s1 + i);
        i++;
    }
    return(0);
}
/* MANUEL MEMCHR
    #include <string.h>
    void * memchr(const void *s, int c, size_t n);

	Recherche la première occurrence d'un caractère c dans les n premiers octets de la zone mémoire pointée par s.
*/
