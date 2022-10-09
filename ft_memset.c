/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:16:55 by adardour          #+#    #+#             */
/*   Updated: 2022/10/09 16:35:35 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    i = 0;

    unsigned char *bb = (unsigned char *)b;
    if (b == NULL)
        return NULL;
    while (bb[i] != '\0' && len > i)
    {
        bb[i] = (unsigned char)c;
        b++;
        i++;
    }
    return (bb);
}