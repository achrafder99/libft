/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:16:11 by adardour          #+#    #+#             */
/*   Updated: 2022/10/10 22:59:15 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t FT_FULL_SIZE(const char *src)
{
    int k;
    k = 0;
    while (*src != '\0')
    {
        src++;
        k++;
    }
    return (k);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{

    int i;
    i = 0;

    int k;
    k = 0;

    while (dstsize > 0)
    {
        while (dst[i] != '\0' && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
        dstsize--;
    }

    return FT_FULL_SIZE(src);
}