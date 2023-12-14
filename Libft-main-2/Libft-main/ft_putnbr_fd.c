/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:05:12 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:46:04 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "2147483648", 12);
		return ;
	}
	if (n > 0 && n < 9)
	{
		ft_putchar_fd(n + '0');
	}
	else if (n < 0)
	{
		ft_putchar_fd('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10);
		ft_putchar_fd(n % 10);
	}
}
