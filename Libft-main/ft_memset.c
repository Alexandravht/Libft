/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:57:17 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:46:03 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*cptr;
	int		i;

	*cptr = (char *)ptr;
	i = 0;
	while (cptr[i] != '\0' && n > 0)
	{
		cptr[i] = x;
		i++;
	}
	return (cptr);
}
