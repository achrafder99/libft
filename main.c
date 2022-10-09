/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:27:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/09 16:34:34 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{

    // printf("                      \n");
    // printf("FT_ATOI ============================\n");
    // printf("                      \n");
    // printf("Result Of My Function I Build => %d\n", ft_atoi("A2-1d2"));
    // printf("Result Of Built You Function  => %d\n", atoi("A2-1d2"));
    // printf(ft_atoi("A2-12") == atoi("2-1d2") ? "\033[0;32mSuccess\n" : "\033[0;31mFailed\n");
    // printf("                      \n");
    // return 0;

    char buffer[10];
    for (int i = 0; i < 10 - 1; i++)
        buffer[i] = 'a';
    printf("%s", ft_memset(buffer, 'c', 5));
    return (0);
}