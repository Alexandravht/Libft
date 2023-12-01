/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandravohnout <alexandravohnout@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:03 by alvohnou          #+#    #+#             */
/*   Updated: 2023/12/01 17:42:02 by alexandravo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	int		i;
	int		j;

	*cdest = (char *)dest;
	*csrc = (char *)src;
	i = 0;
	j = ft_strlen(src);
	while (csrc[i] != '\0')
	{
		if (ft_strlen(src) >= ft_strlen(dest))
		{
			cdest[i] = csrc[i];
			i++;
		}
		else
		{
			cdest[] = csrc[j];
			i--;
		}
	}
	return (cdest);
