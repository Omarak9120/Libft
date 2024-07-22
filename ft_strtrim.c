/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelka <oabdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:47:41 by oabdelka          #+#    #+#             */
/*   Updated: 2024/06/18 17:47:42 by oabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isskippable(char c, const char *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	len;

	if (!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (isskippable(s1[start], set))
		start++;
	while (isskippable(s1[len - 1], set))
		len--;
	return (ft_substr(s1, start, len - start));
}
