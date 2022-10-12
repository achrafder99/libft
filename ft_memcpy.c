/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:46:22 by adardour          #+#    #+#             */
/*   Updated: 2022/10/12 15:56:06 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	i = 0;

	char *dst1;
	dst1 = (char *)dst;

	char *src1;
	src1 = (char *)src;

	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}