/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:34:32 by adardour          #+#    #+#             */
/*   Updated: 2022/10/11 00:37:54 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    str1 = (unsigned char *)s1;

    unsigned char *str2;
    str2 = (unsigned char *)s2;

    size_t i;
    i = 0;
    while ((*str1 && *str2) && (*str1 == *str2) && i < n - 1)
    {
        str1++;
        str2++;
        i++;
    }
    return (*str1 - *str2);
}
