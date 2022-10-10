/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:04:50 by adardour          #+#    #+#             */
/*   Updated: 2022/10/10 23:01:39 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *tt;

    size_t i;
    i = 0;

    if (ft_strlen(needle) == 0)
        return (char *)haystack;
    if (len != 0)
    {
        while (haystack[i] != '\0' && i < len)
        {
            int j;
            j = 0;

            if (haystack[i] == needle[0])
            {
                while (needle[j] != '\0')
                {
                    if (haystack[i + j] != needle[j])
                    {
                        break;
                    }
                    j++;
                }
                tt = ((char *)haystack + i);
                return tt;
            }
            i++;
        }
        return NULL;
    }
    return (NULL);
}
