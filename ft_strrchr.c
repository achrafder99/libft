/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:49:35 by adardour          #+#    #+#             */
/*   Updated: 2022/10/08 19:10:33 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{

    int i;
    i = 0;

    int indexOfOccurence;
    indexOfOccurence = -1;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            indexOfOccurence = i;
        }
        i++;
    }
    printf("%d\n", indexOfOccurence);
    return (NULL);
}

int main()
{

    char *str = "a,c,h,der";
    char occurence = ',';
    char *ptr = ft_strrchr(str, occurence);
    printf("%s", ptr);
    return (0);
}