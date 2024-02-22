/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:24:00 by lellong-          #+#    #+#             */
/*   Updated: 2022/11/26 10:22:55 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*s1;
	char			*s2;

	s1 = (char *)str;
	s2 = (char *)tofind;
	if (tofind == NULL || *tofind == '\0')
		return (s1);
	if (len <= 0)
		return (NULL);
	i = 0;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
