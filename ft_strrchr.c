/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:49:35 by adardour          #+#    #+#             */
/*   Updated: 2022/10/12 23:55:16 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{

    int length;
    length = ft_strlen(s);

    if (c == 0)
        return ((char *)s + length);
    while (length)
    {
        if (s[length] == c)
            return ((char *)s + length);
        length--;
    }
    return (NULL);
}

int main(){
    printf("%s\n", ft_strrchr("achraf dardour",200));
    printf("%s\n", strrchr("achraf dardour",200));
}