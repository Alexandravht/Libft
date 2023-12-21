/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:24:06 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 11:51:37 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int chr)
{
    int i ;
    i = 0;

    while(str[i])
    {
        if (str[i] == (unsigned char)chr)
            return((char *)&str[i]);
        else
            i++;
    }
	if(str[i] == (unsigned char)chr)
		return((char *)&str[i]);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char *c;
	char *c1;
	char s[] = "tripouille";

	c = ft_strchr(s, 0);
	c1 = strchr(s, 0);
	printf("c : %s\n", c);
	printf("c1 : %s\n", c1);
}*/