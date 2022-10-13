/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:18:35 by adardour          #+#    #+#             */
/*   Updated: 2022/10/13 14:20:28 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	i = 0;

	size_t k;
	k = 0;

	char *dst1;
	dst1 = (char *)dst;

	char *src1;
	src1 = (char *)src;

	char tmp[len];
	
	while (src1[i] != '\0' && i < len)
	{
		tmp[i] = src1[i];
		i++;
	}
	while (tmp[k] != '\0' && k < len) 
	{
		dst1[k] = tmp[k];
		k++;
	}
	return (dst1);
}
