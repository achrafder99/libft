/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:25:48 by adardour          #+#    #+#             */
/*   Updated: 2022/10/12 23:22:30 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char    *buffer;
	char    *substr;
	int i;
	
	buffer = (char *)malloc(ft_strlen(s) * sizeof(char));
	substr = (char *)malloc(len * sizeof(char));
	i = 0;
	if (buffer == NULL)
		return NULL;
	while(s[i] != '\0'){
		buffer[i] = s[i];
		i++;
	};
	buffer[i] = '\0';
	ft_memcpy(substr,buffer + start,len);
	return (substr);
}
