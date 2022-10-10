/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:27:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/10 18:39:01 by adardour         ###   ########.fr       */
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

    // printf("%s", ft_memset(buffer, 'c', 5));
    // return (0);

    // ft_bzero(tt, 4);
    // printf("%s", tt);
    // char src[5] = "aaaa";   // Source
    // char dst[7] = "achraf"; // dst buffer
    // // copy source buffer int dst
    // memcpy(dst, src, 4);
    // printf("%s\n", dst);

    //     char *str = "derdourachraf@gmail.com";

    //     char *res2 = memchr(str, '@', -2);
    //     char *res = ft_memchr(str, '@', -2);
    //     printf("%s\n", res);
    //     printf("%s", res2);
    //     return 0;

    // char *str = "Achraf";
    // char *str2 = "achraf";
    // int res = ft_memcmp(str, str2, 20);
    // printf("%d\n", res);
    // printf("%d", memcmp(str, str2, 20));

    char *str = "Achraf dardour";
    printf("%s\n", ft_strrchr(str, '\0'));
    printf("%s\n", strrchr(str, '\0'));

    return (0);
}