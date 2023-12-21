/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:05:12 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/17 16:22:01 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }

    ft_putchar_fd((n % 10) + '0', fd);
}