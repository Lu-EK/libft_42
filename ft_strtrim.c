/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:02:26 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 16:02:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_charset(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	charset_end(char const *s1, char *set)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (i > 0 && is_in_charset(set, ((char *)s1)[i]))
	{
		i--;
		count++;
	}
	return (count);
}

static char	*malloc_me(size_t size, char *s1, size_t start_limit)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc(sizeof(char) * size + 1);
	if (!string)
		return (NULL);
	while (size > 0)
	{
		string[i] = ((char *)s1)[start_limit];
		start_limit++;
		i++;
		size--;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start_limit;
	size_t	size;
	char	*charset;
	char	*string;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	charset = (char *)set;
	while (((char *)s1)[i] && is_in_charset(charset, ((char *)s1)[i]))
		i++;
	if (i == ft_strlen(s1))
	{
		string = (char *)malloc(sizeof(char) * 1);
		if (!string)
			return (NULL);
		string[0] = '\0';
		return (string);
	}
	start_limit = i;
	size = ft_strlen(s1) - start_limit - charset_end(s1, charset);
	string = malloc_me(size, (char *)s1, start_limit);
	return (string);
}
