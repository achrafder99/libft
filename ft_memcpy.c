/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:46:22 by adardour          #+#    #+#             */
/*   Updated: 2022/10/12 00:43:45 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{

    size_t i;
    i = 0;

    char *dst1;
    dst1 = (char *)dst;

    char *src1;
    src1 = (char *)src;

    if (dst == NULL)
        return NULL;
    while ((dst1[i] != '\0' && src1[i] != '\0') && (i < n))
    {
        dst1[i] = src1[i];
        i++;
    }
    return (void *)(dst1);
}