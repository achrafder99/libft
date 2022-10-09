/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:25:48 by adardour          #+#    #+#             */
/*   Updated: 2022/10/09 01:39:04 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    i = 0;

    char *ptr;
    ptr = strdup(s);

    while (i <= len)
    {

        i++;
    }
    return ptr;
}

int main()
{
    char *str = "achraf dardour";
    printf("%s", ft_substr(str, 2, 2));
    return (0);
}