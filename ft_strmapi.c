/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:57:43 by adardour          #+#    #+#             */
/*   Updated: 2022/10/17 14:39:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    int i;
    char *str;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));

    while (s[i] != '\0')
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i + 1] = '\0';
    return (str);
}
