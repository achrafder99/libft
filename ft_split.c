/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:34:32 by adardour          #+#    #+#             */
/*   Updated: 2022/10/19 15:56:17 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getrows(char const *s, char delimiter)
{
	char	*trim;
	int		count;
	int		stop;

	count = 0;
	trim = ft_strtrim(s, &delimiter);
	while (*trim != '\0')
	{
		if (*trim == delimiter)
			stop = 0;
		else if (stop == 0)
		{
			stop = 1;
			++count;
		}
		++trim;
	}
	return (count + 1);
}

static int	getcolumn(char *str, char delimiter, int index)
{
	int	length;

	length = 0;
	while (str[index] != '\0')
	{
		if (str[index] == delimiter)
			break ;
		index++;
		length++;
	}
	return (length);
}



void	fill(char *trim, char **ptr, int row, char c)
{
	int	i;
	int	j;
	int	jj;

	i = 0;
	j = 0;
	jj = 0;
	while (row > j)
	{
		while (trim[i] != c && trim[i] != '\0')
		{
			ptr[j][jj] = trim[i];
			if (ptr[j] == NULL)
				return ((void)(NULL));
			i++;
			jj++;
		}
		i += 1;
		if (trim[i] != c)
		{
			ptr[j][jj] = '\0';
			jj = 0;
			j++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	rowsandcolumn	rc;
	int				i;
	char			**ptr;
	char			*trim;

	if (!s)
		return (NULL);
	trim = ft_strtrim(s, &c);
	rc.row = getrows(trim, c);
	ptr = (char **)malloc(sizeof(char *) * (rc.row + 1));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (rc.row > rc.j)
	{
		while (trim[i] != '\0')
		{
			if (trim[i] == c)
				break ;
			ptr[rc.j] = malloc(sizeof(char) * getcolumn(trim, c, i) + 1);
			if (ptr[rc.j] == NULL)
				return (NULL);
			i += getcolumn(trim, c, i);
		}
		i += 1;
		if (trim[i] != c)
			rc.j++;
		rc.j = rc.j;
	}
	fill(trim, ptr, rc.row, c);
	ptr[rc.j] = NULL;
	return (ptr);
}
