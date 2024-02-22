/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:13 by lellong-          #+#    #+#             */
/*   Updated: 2022/11/15 11:26:13 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	while (i < n)
	{
	dest1[i] = src1[i];
	i++;
	}
	return (dest1);
}
