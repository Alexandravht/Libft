/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:06:28 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/05 19:56:29 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	out;

	sign = 1;
	i = 0;
	out = 0;
	while(str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	if(str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = ((out * 10) + (str[i] - '0'));
		i++;
	}
	return (out * sign);
}

//TEST ATOI 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char *test1 = "+++++1234";
	const char *test2 = "-----1234";
	const char *test3 = "-1";
	const char *test4 = "23";
	
	printf("Test 1: %d\n", ft_atoi(test1));
	printf("Test 1: %d\n", atoi(test1));
	printf("Test 2: %d\n", ft_atoi(test2));
	printf("Test 2: %d\n", atoi(test2));
	printf("Test 3: %d\n", ft_atoi(test3));
	printf("Test 3: %d\n", atoi(test3));
	printf("Test 4: %d\n", ft_atoi(test4));
	printf("Test 4: %d\n", atoi(test4));
}
