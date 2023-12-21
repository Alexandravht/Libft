/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:00:29 by alexandravo       #+#    #+#             */
/*   Updated: 2023/12/20 20:48:09 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*new(const char *s1, const char *set, size_t *k, size_t i)
{
	size_t	j;
	size_t	len;
	char	*dst;

	j = 0;
	len = ft_strlen(s1);
	while (check(s1[len - j - 1], set))
		j++;
	if ((dst = ft_calloc(sizeof(char), len - (j + i) + 1)) == NULL)
		return (NULL);
	while (*k < len - (j + i))
	{
 		dst[*k] = s1[i + *k];
        (*k)++;
	}
	return (dst);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*dst;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (check(s1[i], set))
		i++;
	k = 0;
	if (i == len)
		dst = malloc(1);
	else
		dst = new(s1, set, &k, i);
	if (dst != NULL)
		dst[k] = '\0';
	return (dst);
}