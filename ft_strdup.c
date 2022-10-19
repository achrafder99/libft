/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:26:43 by adardour          #+#    #+#             */
/*   Updated: 2022/10/16 23:59:52 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *ptr;
    ptr = (char *)malloc(sizeof(s1) * ft_strlen(s1));

    size_t i;
    i = 0;

    if (ptr == NULL)
        return (NULL);
    else
    {
        while (i <= ft_strlen(s1))
        {
            ptr[i] = s1[i];
            i++;
        }
    }
    ptr[i + 1] = '\0';
    return (ptr);
}
