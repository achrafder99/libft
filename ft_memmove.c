/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:18:35 by adardour          #+#    #+#             */
/*   Updated: 2022/10/19 01:28:45 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	k;
	char	*dst1;
	char	*src1;
	char	tmp[len];

	i = 0;
	k = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
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
	return dst1;
}
