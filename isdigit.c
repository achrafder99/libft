/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:49:34 by adardour          #+#    #+#             */
/*   Updated: 2022/10/08 10:51:19 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_digit(int c){
    if((c >= 48 && c <= 57)){
        return (1);
    }
    else{
        return (0);
    }
}

int main(){
    char a = 'a';
    printf("%d", ft_digit(a));
    return 0;
}