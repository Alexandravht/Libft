/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:23:24 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 14:54:28 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    
    if (size != 0 && count > SIZE_MAX / size)
        return NULL;
    ptr = (void *)malloc(count * size);
    if (ptr == NULL)
        return (NULL);
    ft_memset(ptr, 0, count * size);
    return(ptr);
}

/* MANUEL CALLOC
     #include <stdlib.h>
     void * calloc(size_t count, size_t size);

	La fonction calloc() alloue de manière contiguë suffisamment d'espace pour count objets de size octets chacun et renvoie un pointeur vers la mémoire allouée. La mémoire allouée est remplie d'octets de valeur zéro.
*/

/*
- count permet d'indiquer le nombre de bloc de memoire a allouer
- size permet d'indiquer la taille du bloc de memoire a allouer
- on creer nmemb blocs de memoire de meme taille
- on initialise tous les octets a 0
*/
