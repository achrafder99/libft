/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:59:56 by adardour          #+#    #+#             */
/*   Updated: 2022/10/08 11:50:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    // unsigned char s1_t = (unsigned char *)s1;
    // unsigned char s2_t = (unsigned char *)s2;
    int i;
    i = 0;

    while((*(unsigned char*)s1 == *(unsigned char*)s2) && (i < (n - 1))){
        i++;
    }
    return (*(unsigned char*)s1 - *(unsigned char*)s2); 
}
int main(){
    char *s = "achraf";
    char *s2 = NULL;
    size_t size;
    size = 22;
    printf("%d\n",ft_strncmp(s, s2, size));
    printf("%d",strncmp(s, s2, size));

    return (0);
}