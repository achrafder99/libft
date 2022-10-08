/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:52:53 by adardour          #+#    #+#             */
/*   Updated: 2022/10/08 21:45:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int fft_isprint(int c)
{
    if (c >= 32 && c <= 127)
    {
        return (1);
    }
    return (0);
}

int main()
{
    printf("%d", ft_isprint('a'));
    return (0);
}