/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:18:35 by adardour          #+#    #+#             */
/*   Updated: 2022/10/20 17:47:55 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	size_t			k;
	unsigned char	*dst1;
	unsigned char	*src1;
	char			tmp[len + 1];

	if (dst == NULL || src == NULL)
	{
		return (NULL);
	}
	i = 0;
	k = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (src1[i] != '\0' && i < len)
	{
		tmp[i] = src1[i];
		i++;
	}
	i = 0;
	while (tmp[k] != '\0' && k < len)
	{
		dst1[k] = tmp[k];
		k++;
	}
	tmp[len] = '\0';
	return (dst1);
}
