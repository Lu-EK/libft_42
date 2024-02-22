/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:48 by lellong-          #+#    #+#             */
/*   Updated: 2022/11/15 11:26:48 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c == '\0')
		return (str + ft_strlen(s));
	if (!c)
		return (str + i);
	while (str[i])
	{
		if (str[i] == c || str[i] + 256 == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
