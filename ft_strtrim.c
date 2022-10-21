/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/21 00:58:09 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getindex(char *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (str[i] == set[j])
				break ;
			j++;
		}
		if (ft_strchr(set, str[i + 1]) == NULL)
			break ;
		i++;
	}
	if (i > 0)
		return (i += 1);
	return (i);
}

static int	getlastindex(char *str, char const *set)
{
	int	end;
	int	j;

	end = ft_strlen(str);
	while (end > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (str[end] == set[j])
			{
				break ;
			}
			j++;
		}
		if (ft_strchr(set, str[end - 1]) == NULL)
		{
			break ;
		}
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	char	*substr;
	int		size;
	int		sizeAllocation;

	if (s1 == 0 || set == 0)
		return (0);
	str = strdup(s1);
	start = getindex(str, set);
	end = getlastindex(str, set);
	if (str == 0)
		return (0);
	sizeAllocation = (ft_strlen(str) - end) + start;
	size = ((ft_strlen(s1)) - sizeAllocation);
	substr = (char *)malloc((sizeof(char) * size) + 1);
	if (substr == NULL)
		return (NULL);
	substr = ft_memcpy(substr, str + start, size);
	substr[size] = '\0';
	return (substr);
}
