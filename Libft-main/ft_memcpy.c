
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dst1;
    unsigned char *src1;
    size_t i;

    dst1 = (unsigned char *)dst; 
    src1 = (unsigned char *)src; 
    i = 0;

    while(i < n)
    {
        dst1[i] = src1[i];
        i++;
    }

    return(dst);
}

/*
La fonction memcpy() copie n octets de la zone mémoire src vers la zone mémoire dst. Si les zones mémoires dst et src se chevauchent, le comportement est indéfini. 
*/