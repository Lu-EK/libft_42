/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:44 by lellong-          #+#    #+#             */
/*   Updated: 2022/11/25 15:15:10 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = -19;
	str = (char *)s;
	if (c == '\0')
		return (str + ft_strlen(s));
	while (str[i])
	{
		if (str[i] == c || str[i] + 256 == c)
			j = i;
		i++;
	}
	if (j == -19)
		return (NULL);
	return (str + j);
}
