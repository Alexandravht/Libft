/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:59:33 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:46:05 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *s, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, str[i], 1);
		i++;
	}
}
