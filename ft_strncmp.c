/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:59:56 by adardour          #+#    #+#             */
/*   Updated: 2022/10/11 12:17:28 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *str1;
    str1 = (unsigned char *)s1;

    unsigned char *str2;
    str2 = (unsigned char *)s2;

    if (n == 0)
        return (0);
    while ((*str1 && *str2) && (*str1 == *str2) && (i < (n - 1)))
    {
        i++;
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}