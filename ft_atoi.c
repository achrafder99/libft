/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:47:05 by adardour          #+#    #+#             */
/*   Updated: 2022/10/09 10:34:34 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int checkIfIsEscapeSequence(char c);

int ft_atoi(const char *str)
{
    int i;
    i = 0;

    int sign;
    sign = 1;

    int result;
    result = 0;
    while (checkIfIsEscapeSequence(str[i]) == 1)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (ft_isdigit(str[i]) == 1)
    {
        result = (result * 10) + str[i] - 48;
        i++;
    }
    return (result * sign);
}

int checkIfIsEscapeSequence(char c)
{
    if (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == 32)
    {
        return (1);
    }
    return (0);
}