/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:04:50 by adardour          #+#    #+#             */
/*   Updated: 2022/10/10 18:08:00 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    i = 0;

    while (haystack[i] != '\0')
    {
        int j;
        j = 0;

        while (needle[j] != '\0')
        {
            if (needle[j] != haystack[i + j])
            {
                break;
            }
            j++;
        }
        i++;
    }

    return (i);
}

int main()
{
    printf("%d", ft_strnstr("achraf dardour", "raf", 5));
    return (0);
}
