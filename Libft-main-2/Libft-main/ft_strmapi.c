/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:36:45 by alexandravo       #+#    #+#             */
/*   Updated: 2023/12/12 21:36:55 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int length;
    char *str;
    
    length = ft_strlen(s);
    str = (char *)malloc((length + 1) * sizeof(char));
    if (str == NULL)
        return(NULL);
    i = 0;
    while(s[i])
    {
        str[i] = f(i, s[i]);
    }
    str[i] = '\0';
    return(str);
}