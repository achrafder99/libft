/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:49:35 by adardour          #+#    #+#             */
/*   Updated: 2022/10/09 12:12:52 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{

    int length;
    length = ft_strlen(s);

    int IndexOfOccurence;
    IndexOfOccurence = 0;

    int Out;
    Out = 1;

    while (length-- && Out == 1)
    {
        if (s[length] == c)
        {
            IndexOfOccurence = length;
            Out = 0;
            return ((char *)s + IndexOfOccurence);
        }
    }
    return NULL;
}
