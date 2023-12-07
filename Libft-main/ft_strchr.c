
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