/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:51:37 by adardour          #+#    #+#             */
/*   Updated: 2022/10/08 10:53:36 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c){
    if(isdigit(c) || isalpha(c)){
        return (1);
    }
    return (0);
}

int main(){
    printf("%d",ft_isalnum('&'));
    return (0);
}