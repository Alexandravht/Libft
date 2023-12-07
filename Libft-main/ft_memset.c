/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:57:17 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/07 21:20:05 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*cptr;
	int		i;

	cptr = (char *)ptr;
	i = 0;
	while (cptr[i] != '\0' && n > 0)
	{
		cptr[i] = x;
		i++;
	}
	return (cptr);
}
