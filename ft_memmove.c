/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvohnou <alvohnou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:55:03 by alvohnou          #+#    #+#             */
/*   Updated: 2023/11/18 00:57:04 by alvohnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
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
