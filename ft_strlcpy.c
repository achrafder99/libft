/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:16:11 by adardour          #+#    #+#             */
/*   Updated: 2022/10/20 00:06:24 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    i = 0;

    size_t SizeSrc;
    SizeSrc = 0;

    while (dstsize > 0)
    {
        while ((dst[i] != '\0' && src[i] != '\0') && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
        dstsize--;
    }
    return (ft_strlen(src));
}
