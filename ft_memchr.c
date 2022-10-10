/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:54:34 by adardour          #+#    #+#             */
/*   Updated: 2022/10/11 00:14:57 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    str = (unsigned char *)s;

    size_t i;
    i = 0;

    while (*str != '\0' && i < n)
    {
        if (*str == (unsigned char)c)
        {
            return str;
        }
        str++;
        i++;
    }
    return NULL;
}
