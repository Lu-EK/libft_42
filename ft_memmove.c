/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:24 by lellong-          #+#    #+#             */
/*   Updated: 2022/11/15 11:26:24 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	if (!src && !dest)
		return (NULL);
	i = -1;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (src1 > dest1)
	{
		while (++i < n)
			dest1[i] = src1[i];
	}
	else
	{
		while (n > 0)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
	}
	return (dest1);
}
