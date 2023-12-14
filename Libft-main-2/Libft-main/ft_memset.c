/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:57:17 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/13 12:43:28 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*cptr;
	size_t		i;

	cptr = (char *)ptr;
	i = 0;
	while (i < n)
	{
		cptr[i] = x;
		i++;
	}
	return (cptr);
}