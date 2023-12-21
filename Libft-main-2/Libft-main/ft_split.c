/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:49:11 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 14:59:57 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_word(const char *s, char c)
{
    int is_word;
    int count_w;
    int i;

    i = 0;
    is_word = 0;
    count_w = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            if (is_word == 0)
            {
                is_word = 1;
                count_w++;
            }
        }
        else
            is_word = 0;
        i++;
    }
    return (count_w);
}

int len_word(const char *s, char c)
{
    int i;
    int len_w;

    i = 0;
    len_w = 0;
    while (s[i] != c && s[i])
    {
        len_w++;
        i++;
    }
    return (len_w);
}

char **ft_split(char const *s, char c)
{
    char **tab;
    int len;
    int i;
    int j;

    i = 0;
    if (s == NULL)
        return (NULL);
    tab = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
    if (tab == NULL)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            len = len_word(s, c);
            tab[i] = (char *)malloc((len + 1) * sizeof(char));
            if (tab[i] == NULL)
            {
                while (--i >= 0)
                    free(tab[i]);
                free(tab);
                return (NULL);
            }
            j = 0;
            while (j < len)
            {
                tab[i][j] = *s;
                j++;
                s++;
            }
            tab[i][len] = '\0';
            i++;
        }
        else
            s++;
    }
    tab[i] = NULL;
    return (tab);
}

/*
#include <stdio.h>
int main()
{
	char const *str;
	char c1;
	char **tab;

	str = "Bonjour----à-tous";
	c1 = '-';
	tab = ft_split(str, c1);
    if (tab != NULL)
    {
        for (int i = 0; tab[i] != NULL; i++)
        {
            printf("Mot %d : %s\n", i, tab[i]);
        }
        for (int i = 0; tab[i] != NULL; i++)
        {
            free(tab[i]);
        }
        free(tab);
    }
    return (0);
}*/