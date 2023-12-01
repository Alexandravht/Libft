/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:06:28 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/01 17:41:58 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	out;

	sign = 1;
	i = 0;
	out = 0;
	if (str[i] == '-')
	{
		sign = -1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = ((out * 10) + (str[i] - '0'));
	i++;
	}
	return (out * sign);
}

/* MANUEL ATOI
     #include <stdlib.h>
     int atoi(const char *str);

	La fonction atoi() convertit la portion initiale de la chaîne pointée par str en une représentation de type int.
*/

/* TEST ATOI 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char *test1 = "1234";
	const char *test2 = "-----1234";
	const char *test3 = "-1";
	const char *test4 = "00000";
	
	printf("Test 1: %d\n", ft_atoi(test1));
	printf("Test 1: %d\n", atoi(test1));
	printf("Test 2: %d\n", ft_atoi(test2));
	printf("Test 2: %d\n", atoi(test2));
	printf("Test 3: %d\n", ft_atoi(test3));
	printf("Test 3: %d\n", atoi(test3));
	printf("Test 4: %d\n", ft_atoi(test4));
	printf("Test 4: %d\n", atoi(test4));
}
*/