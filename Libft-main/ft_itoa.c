/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:23:39 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/20 20:35:38 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_n(long n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}


static void	ft_stock(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_stock(n / 10, str, i);
		ft_stock(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}


char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;

	if ((str = malloc(sizeof(char) * (ft_len_n(nbr) + 1))) == NULL)
		return (NULL);
	i = 0;
	
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	
	ft_stock(nbr, str, &i);
	str[i] = '\0';  
	return (str);
}
