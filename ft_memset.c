/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:16:55 by adardour          #+#    #+#             */
/*   Updated: 2022/10/08 20:33:55 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    int i;
    i = 0;
    while (len > 0)
    {
        *(unsigned char *)b = c;
        b++;
        len--;
    }
    return (b);
}

int main()
{

    char *str = "achraf dardour";
    char c = 'a';
    printf("%s", ft_memset(str, c, 4));
    return 0;
}