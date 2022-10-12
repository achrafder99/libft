/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/12 19:56:02 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*buff1;
	int		i;
	int		j;
	int		k;
	int		index;

	ptr = ft_strdup(s1);
	j = 0;
	k = 0;
	if (ptr == NULL)
		return (NULL);
	while (s1[j] != '\0' && set[j] != '\0')
	{
		if (ft_strncmp(s1, set, ft_strlen(set) - 1) == 0)
			index = ft_strlen(set);
		j++;
	}
	while (index <= ft_strlen(ptr))
	{
		printf("%c", ptr[index - 1]);
		index++;
	}
	printf("\n");
	printf("=====\n");
	return (ptr);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	// ft_strlen(s1) - ft_strlen(s2)
	s1 = "aabchraf dardouraccaab";
	s2 = "aaa";
	printf("%s", ft_strtrim(s1, s2));
	return (0);
}

// s1 = "achraf dardourac";
// set = "ac";
