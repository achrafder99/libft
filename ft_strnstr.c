/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:04:50 by adardour          #+#    #+#             */
/*   Updated: 2022/10/19 23:31:03 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		j;
	size_t	i;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < len - 1)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (haystack[(i + ft_strlen(needle))- 1] == needle[ft_strlen(needle) - 1])
				return ((char *)haystack + i);
			else
				break;
		}
		i++;
	}
	return (NULL);
}
