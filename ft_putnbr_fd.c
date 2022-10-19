/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:35:41 by adardour          #+#    #+#             */
/*   Updated: 2022/10/19 01:57:27 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd){

    
    long long int number;
    number = n;
    if(number == - 2147483648){
        ft_putchar_fd('-',fd);
        ft_putchar_fd('2',fd);
        number = 147483648;
    }
    if (number < 0)
    {
        ft_putchar_fd('-',fd);
        number *= -1;
        ft_putnbr_fd(number, fd);
    }
    else if(number >= 0 && number < 9){
        ft_putchar_fd(number + 48,fd);
    }
    else {
        ft_putnbr_fd(number / 10, fd);
        ft_putnbr_fd(number % 10, fd);
    }
}
